//
//  StarDust.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "StarDust.h"

ofImage StarDust::star_image;

StarDust::StarDust(ofVec2f _pos){
    alpha = 255;
    pos = _pos;
    vel = ofVec2f(ofRandom(-1,1), ofRandom(-1, 1)).normalize() * ofRandom(5);
    angle = ofRandom(0,360);
}

void StarDust::init(){
    star_image.loadImage("star.png");
}

void StarDust::update(){
    vel += ofVec2f(0,0.1);
    pos += vel;
    alpha -= 5;
    angle += 2;
}

void StarDust::draw(){
    ofSetColor(255, 255, 0, alpha);
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(angle);
    star_image.draw(0,0, 30,30);
    ofPopMatrix();
}

bool StarDust::isDead(){
    return alpha <= 0;
}
