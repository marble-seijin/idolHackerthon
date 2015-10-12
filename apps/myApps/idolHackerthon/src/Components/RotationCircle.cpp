//
//  RotationCircle.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "RotationCircle.h"


RotationCircle::RotationCircle(int location, bool *flg){
    r = 40;
    angle = 0;
    alpha = ofRandom(64, 150);
    pos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    color.setHsb(ofRandom(0, 255), 255, 255, alpha);
    if(location == 0){
        distance = 0;
        direction = true;
        angle2 = 2;
    }else if(location < 9){
        distance = 100;
        angle = 45 * (location % 8);
        direction = false;
        angle2 = 2;
    }else if(location < 25){
        distance = 200;
        angle = 22.5 * (location % 16);
        direction = true;
        angle2 = 1.8;
    }else if(location < 49){
        distance = 300;
        angle = 15 * (location % 24);
        direction = false;
        angle2 = 1.6;
    }else if(location < 81){
        distance = 400;
        angle = 11.25 * (location % 32);
        direction = true;
        angle2 = 1.4;
    }else if(location < 121){
        distance = 500;
        angle = 9 * (location % 40);
        direction = false;
        angle2 = 1.2;
    }else if(location < 169){
        distance = 600;
        angle = 7.5 * (location % 48);
        direction = true;
        angle2 = 1;

        if (location == 168) {
            *flg = true;
        }
    }
}

void RotationCircle::update(bool isStop){
    if (isStop) {
        if (alpha<3) {
            alpha=0;
        }else{
            alpha -= 3;
        }
    }
    if (direction) {
        angle += angle2;
    }else{
        angle -= angle2;
    }
}

void RotationCircle::draw(){
    ofPushStyle();
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(angle);
    color.setHex(color.getHex(),alpha);
    ofSetColor(color);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofCircle(distance, distance, r);
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofPopMatrix();
    ofPopStyle();
}

bool RotationCircle::isDead(){
    return alpha <= 0;
}