//
//  HaloScroll.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "HaloScroll.h"


#define ANGLE (3.141592 / 180.0)

HaloScroll::HaloScroll(float startX, float startY){
    length = ofRandom(100, 350);
    angle = ofRandom(0, 360);
    alpha = 0;
    pos = ofVec2f(startX, startY);
    color.setHsb(ofRandom(0, 255), 255, 255, alpha);
    distanceX = 20*sin(ANGLE * angle);
    distanceY = 16*cos(ANGLE * angle);
    cnt = 1.00;
    angle = 0 - angle;
}

void HaloScroll::update(){
    pos += ofVec2f(distanceX * cnt, distanceY * cnt);
    cnt += 0.03;
    if (cnt>1.25) {
        if (alpha < 150) {
            alpha += 4;
        }
    }
}

void HaloScroll::draw(){
    ofPushStyle();
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(angle);
    color.setHex(color.getHex(),alpha);
    ofSetColor(color);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(0, 0, 8*cnt, length*cnt);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofPopMatrix();
    ofPopStyle();
}

bool HaloScroll::isDead(){
    return (pos.x > ofGetWidth() + 300) || (pos.x < 0 - 300);
}