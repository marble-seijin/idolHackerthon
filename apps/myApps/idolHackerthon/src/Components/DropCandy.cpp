//
//  DropCandy.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "DropCandy.h"

DropCandy::DropCandy(){
    alpha = 120;
    pos = ofVec2f(ofRandomWidth(), -100);
    r = ofRandom(50);
    color.setHsb(ofRandom(255), 255, 255);
}

void DropCandy::update(){
    pos += ofVec2f(0,2);
    alpha -= 0.4;
}

void DropCandy::draw(){
    ofSetColor(color, alpha);
    ofCircle(pos, r);
}

bool DropCandy::isDead(){
    return alpha <= 0;
}