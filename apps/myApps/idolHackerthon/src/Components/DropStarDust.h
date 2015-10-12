//
//  DropStarDust.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__DropStarDust__
#define __idolHackerthon__DropStarDust__

#include "ofMain.h"

class DropStarDust {
    ofVec2f pos;
    float alpha;
    float angle;
public:
    DropStarDust();
    static void init();
    static ofImage star_image;
    void update();
    void draw();
    bool isDead();
    
};
#endif /* defined(__idolHackerthon__DropStarDust__) */
