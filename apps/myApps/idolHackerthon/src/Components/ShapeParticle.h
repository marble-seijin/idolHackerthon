//
//  ShapeParticle.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__ShapeParticle__
#define __idolHackerthon__ShapeParticle__

#include "ofMain.h"

class ShapeParticle {
    int pattern;
    ofVec2f pos;
    float angle;
    float r;
    ofColor color;
    bool isDirectionLeft;
public:
    ShapeParticle();
    ShapeParticle(bool isDirectionLeft);
    void update();
    void draw();
    
    bool isDead();
};

#endif /* defined(__idolHackerthon__ShapeParticle__) */
