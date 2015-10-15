//
//  LightRay.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "LightRay.h"


#define ANGLE (3.141592 / 180.0)

LightRay::LightRay(){
    alpha = 1;
    color.setHsb(ofRandom(0, 255), 255, 255, alpha);
    cnt = 0;
    upperPoint = ofGetWidth() / 7 * 6;
    upperWidth = ofGetWidth() / 40;
    lowerPoint = upperPoint - upperWidth;
    lowerWidth = upperWidth * 1.4;
}

void LightRay::update(){
    cnt++;
    if(cnt<60){
        alpha += 0.5;
    }else if(cnt>400){
        alpha -= 0.2;
        if (alpha == 0) {
            cnt = 0;
        }
    }
    upperPoint -= 1;
    lowerPoint -= 1.3;
    lowerWidth += 0.2;
}

void LightRay::draw(){
    ofPushStyle();
    ofPushMatrix();
    color.setHex(color.getHex(),alpha);
    ofSetColor(color);
    ofBeginShape();
    ofVertex(upperPoint, 0);
    ofVertex(upperPoint + upperWidth, 0);
    ofVertex(lowerPoint, ofGetHeight());
    ofVertex(lowerPoint - lowerWidth, ofGetHeight());
    ofVertex(upperPoint, 0);
    ofEndShape();
    ofPopMatrix();
    ofPopStyle();
}

bool LightRay::isDead(){
    return alpha <= 0;
}