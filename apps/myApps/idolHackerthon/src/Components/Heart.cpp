//
//  Heart.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "Heart.h"

ofImage Heart::heart_image;

Heart::Heart(){
    
}

Heart::Heart(bool _isDirectionLeft, bool _isPositionLeft){
    alpha = 255;
    isDirectionLeft = _isDirectionLeft;
    if (isDirectionLeft) {
        if (_isPositionLeft) {
            pos = ofVec2f(ofGetWidth()/2-300-100,ofGetHeight()-200);
        }else{
            pos = ofVec2f(ofGetWidth()/2+300-100,ofGetHeight()-200);
        }
        vel = ofVec2f(-2, 0);
    }else{
        if(_isPositionLeft){
            pos = ofVec2f(ofGetWidth()/2-300+100,ofGetHeight()-200);
        }else{
            pos = ofVec2f(ofGetWidth()/2+300+100,ofGetHeight()-200);
        }
        vel = ofVec2f(2, 0);
    }
}

void Heart::init(){
    heart_image.loadImage("heart.png");
}

void Heart::update(){
    vel *= 0.95;
    pos += vel;
    alpha -= 10;
}

void Heart::draw(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255, alpha);
    heart_image.draw(pos, 126, 76);
}

bool Heart::isDead(){
    return alpha <= 0;
}