//
//  Heart.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__Heart__
#define __idolHackerthon__Heart__

#include "ofMain.h"

class Heart {
    ofVec2f pos;
    ofVec2f vel;
    float alpha;
    bool isDirectionLeft;
public:
    Heart();
    Heart(bool _isDirectionLeft, bool _isPositionLeft);
    
    static ofImage heart_image;
    static void init();
    void update();
    void draw();
    
    bool isDead();
};

#endif /* defined(__idolHackerthon__Heart__) */
