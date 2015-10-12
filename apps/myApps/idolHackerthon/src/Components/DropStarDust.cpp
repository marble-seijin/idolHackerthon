//
//  DropStarDust.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "DropStarDust.h"

ofImage DropStarDust::star_image;

DropStarDust::DropStarDust(){
    alpha = 255;
    pos = ofVec2f(ofRandomWidth(), -100);
    angle = ofRandom(0,360);
}

void DropStarDust::init(){
    star_image.loadImage("star.png");
}

void DropStarDust::update(){
    pos += ofVec2f(0, 2);
    alpha -= 1;
    angle += 2;
}

void DropStarDust::draw(){
    ofSetColor(255, 255, 0, alpha);
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(angle);
    star_image.draw(0,0, 30,30);
    ofPopMatrix();
}

bool DropStarDust::isDead(){
    return alpha <= 0;
}
