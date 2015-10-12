//
//  SlowWave.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "SlowWave.h"

#define ANGLE (3.141592 / 180.0)


SlowWave::SlowWave(){
    alpha = 98;
    color1.setHsb(ofRandom(0, 255), 255, 255, alpha);
    color2.setHsb(ofRandom(0, 255), 255, 255, alpha);
    angle = ofRandom(0, 360);
    angle = -5;
    rotation = 0;
    distance = 0;
}

void SlowWave::update(bool isStop){
    if (isStop) {
        if (alpha<3) {
            alpha=0;
        }else{
            alpha -= 3;
        }
    }
    rotation += 2;
    if (rotation>360) {
        rotation -= 360;
    }
    distance = sin(ANGLE * rotation);
    angle += distance/12;
}

void SlowWave::draw(){
    ofPushStyle();
    ofPushMatrix();
    ofRotate(angle);
    ofTranslate(ofVec2f(0-ofGetWidth()/3,distance*12-ofGetHeight()/4));
    color1.setHex(color1.getHex(),alpha);
    ofSetColor(color1);
    ofRect(0, 0, ofGetWidth()*1.5, ofGetHeight());
    color2.setHex(color2.getHex(),alpha);
    ofSetColor(color2);
    ofRect(0, ofGetHeight(), ofGetWidth()*1.5, ofGetHeight());
    ofPopMatrix();
    ofPopStyle();
}

bool SlowWave::isDead(){
    return alpha <= 0;
}