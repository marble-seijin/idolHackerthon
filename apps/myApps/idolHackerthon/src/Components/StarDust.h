//
//  StarDust.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__StarDust__
#define __idolHackerthon__StarDust__

#include "ofMain.h"

class StarDust {
    ofVec2f pos;
    ofVec2f vel;
    float alpha;
    float angle;
public:
    StarDust(ofVec2f pos);
    static void init();
    static ofImage star_image;
    void update();
    void draw();
    bool isDead();
    
};

#endif /* defined(__idolHackerthon__StarDust__) */
