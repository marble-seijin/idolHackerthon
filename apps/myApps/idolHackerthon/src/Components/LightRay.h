//
//  LightRay.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__LightRay__
#define __idolHackerthon__LightRay__

#include "ofMain.h"

class LightRay {
    ofColor color;
    float alpha;
    int cnt;
    float upperPoint;
    float upperWidth;
    float lowerPoint;
    float lowerWidth;
    
public:
    LightRay();

    static void init();
    void update();
    void draw();
    bool isDead();
};

#endif /* defined(__idolHackerthon__LightRay__) */
