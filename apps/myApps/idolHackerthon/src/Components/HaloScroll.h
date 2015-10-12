//
//  HaloScroll.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__HaloScroll__
#define __idolHackerthon__HaloScroll__

#include "ofMain.h"

class HaloScroll {
    ofVec2f pos;
    float direction;
    ofColor color;
    float angle;
    float length;
    float alpha;
    float distanceX;
    float distanceY;
    float cnt;
public:
    HaloScroll(float startX, float startY);

    static void init();
    void update();
    void draw();
    bool isDead();
};

#endif /* defined(__idolHackerthon__HaloScroll__) */
