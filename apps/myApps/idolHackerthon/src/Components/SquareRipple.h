//
//  SquareRipple.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__SquareRipple__
#define __idolHackerthon__SquareRipple__

#include "ofMain.h" 

class SquareRipple {
    
    float r;
    ofVec2f pos;
    float angle;
    float alpha;
    bool isRect;
    
public:
    SquareRipple();
    SquareRipple(bool isRect);
    void update();
    void draw();
    bool isDead();
    void setShape(bool _isRect);
};

#endif /* defined(__idolHackerthon__SquareRipple__) */
