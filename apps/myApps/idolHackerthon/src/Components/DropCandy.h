//
//  DropCandy.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__DropCandy__
#define __idolHackerthon__DropCandy__

#include "ofMain.h"

class DropCandy {
    ofVec2f vel;
    ofVec2f pos;
    float alpha;
    float r;
    
    ofColor color;
public:
    DropCandy();
    void update();
    void draw();
    bool isDead();
};

#endif /* defined(__idolHackerthon__DropCandy__) */
