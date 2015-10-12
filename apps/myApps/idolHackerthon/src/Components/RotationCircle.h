//
//  RotationCircle.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__RotationCircle__
#define __idolHackerthon__RotationCircle__

#include "ofMain.h"

class RotationCircle {
    ofVec2f pos;
    bool direction;
    ofColor color;
    float angle;
    float angle2;
    float r;
    float alpha;
    float distance;
public:
    RotationCircle(int location, bool *flg);
    
    static void init();
    void update(bool isStop);
    void draw();
    bool isDead();
};

#endif /* defined(__idolHackerthon__RotationCircle__) */
