//
//  ColorChange.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "ColorChange.h"

#define THRESHOLD 90


ColorChange::ColorChange(){
    alpha = THRESHOLD*2;
    alphaR = alpha;
    alphaG = alpha;
    alphaB = 0;
    colorR.r = 255;
    colorR.g = 0;
    colorR.b = 0;
    colorG.r = 0;
    colorG.g = 255;
    colorG.b = 0;
    colorB.r = 0;
    colorB.g = 0;
    colorB.b = 255;
    loop = 0;
    isStop = false;
}

void ColorChange::update(bool isStopFlg){
    isStop = isStopFlg;
    loop += 1;
    if(loop < THRESHOLD){
        alphaB += 1;
    }else if(loop < THRESHOLD*2){
        alphaB += 1;
        alphaR -= 1;
    }else if(loop < THRESHOLD*3){
        alphaR -= 1;
    }else if(loop < THRESHOLD*4){
        alphaR += 1;
    }else if(loop < THRESHOLD*5){
        alphaR += 1;
        alphaG -= 1;
    }else if(loop < THRESHOLD*6){
        alphaG -= 1;
    }else if(loop < THRESHOLD*7){
        alphaG += 1;
    }else if(loop < THRESHOLD*8){
        alphaG += 1;
        alphaB -= 1;
    }else if(loop < THRESHOLD*9){
        alphaB -= 1;
    }else{
        loop = 0;
    }
}

void ColorChange::draw(){
    if(isStop)return;
    ofPushStyle();
    ofPushMatrix();
    colorR.setHex(colorR.getHex(),(alpha - alphaR)/2);
    ofSetColor(colorR);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    colorG.setHex(colorG.getHex(),(alpha - alphaG)/2);
    ofSetColor(colorG);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    colorB.setHex(colorB.getHex(),(alpha - alphaB)/2);
    ofSetColor(colorB);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    ofPopMatrix();
    ofPopStyle();
}

bool ColorChange::isDead(){
    return isStop;
}