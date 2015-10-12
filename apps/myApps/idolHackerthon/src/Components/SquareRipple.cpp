//
//  SquareRipple.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "SquareRipple.h"

SquareRipple::SquareRipple(){
    r = 0;
    angle = ofRandom(0, 360);
    alpha = 255;
    isRect = true;
    pos = ofVec2f(ofRandomWidth(), ofRandomHeight());
}

SquareRipple::SquareRipple(bool _isRect){
    r = 0;
    angle = ofRandom(0, 360);
    alpha = 255;
    isRect = _isRect;
    pos = ofVec2f(ofRandomWidth(), ofRandomHeight());}

void SquareRipple::setShape(bool _isRect){
    isRect = _isRect;
}

void SquareRipple::update(){
    r += 10;
    alpha -= 3;
}

void SquareRipple::draw(){
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(angle);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofPushStyle();
    ofSetLineWidth(3);
    ofNoFill();
    for(int i=0; i<5; ++i){
        ofSetColor(0, 255, 255, alpha - i*30);
        if(isRect){
            ofRect(0, 0, MAX(r-i*30,0), MAX(r-i*30,0));
        }else{
            ofCircle(0,0, MAX(r-i*30,0)/2);
        }
    }
    ofPopStyle();
    ofPopMatrix();
}

bool SquareRipple::isDead(){
    return alpha <= 0;
}