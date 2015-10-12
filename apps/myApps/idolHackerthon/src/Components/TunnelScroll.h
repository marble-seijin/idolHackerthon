//
//  TunnelScroll.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__TunnelScroll__
#define __idolHackerthon__TunnelScroll__

#include "ofMain.h"

class TunnelScroll {
    int pattern;
    ofVec2f pos;
    float direction;
    ofColor color;
    float alpha;
    float distanceX;
    float distanceY;
    float cnt;
public:
    TunnelScroll(float startX, float startY, int position);
    static void init();
    void update();
    void draw();
    static ofImage star_image;
    bool isDead();
};

#endif /* defined(__idolHackerthon__TunnelScroll__) */
