//
//  TunnelScroll.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "TunnelScroll.h"

ofImage TunnelScroll::star_image;

#define ANGLE (30 * 3.141592 / 180.0)

TunnelScroll::TunnelScroll(float startX, float startY, int position){
    pattern = (int)ofRandom(0, 3);
    alpha = 0;
    pos = ofVec2f(startX, startY);
    direction = position;
    if (direction == 0xff) {
        distanceX = 16 - ofRandom(0, 32);
        distanceY = (fabs(distanceX) - 16)/3*2;
        if ((int)ofRandom(0, 2) == 0) {
            distanceY = 0-distanceY;
        }
        color.setHsb(ofRandom(0, 255), 255, 255, alpha);
    }else{
        distanceX = 12*sin(ANGLE * direction);
        distanceY = 8*cos(ANGLE * direction);
        color.setHsb(42, 255, 255, alpha);
    }
    cnt = 1.00;
}

void TunnelScroll::init(){
    star_image.loadImage("star.png");
}

void TunnelScroll::update(){
    pos += ofVec2f(distanceX * cnt, distanceY * cnt);
    cnt += 0.03;
    if (alpha < 96) {
        alpha += 4;
    }
}

void TunnelScroll::draw(){
    ofPushStyle();
    ofPushMatrix();
    ofTranslate(pos);
    color.setHex(color.getHex(),alpha);
    ofSetColor(color);
    star_image.draw(0,0, 45*cnt,45*cnt);
    ofPopMatrix();
    ofPopStyle();
}

bool TunnelScroll::isDead(){
    return (pos.x > ofGetWidth() + 300) || (pos.x < 0 - 300);
}