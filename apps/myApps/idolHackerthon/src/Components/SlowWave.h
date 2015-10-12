//
//  SlowWave.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__SlowWave__
#define __idolHackerthon__SlowWave__

#include "ofMain.h"

class SlowWave {
    ofColor color1;
    ofColor color2;
    float alpha;
    float angle;
    float rotation;
    float distance;

public:
    SlowWave();

    static void init();
    void update(bool isStop);
    void draw();
    bool isDead();
};

#endif /* defined(__idolHackerthon__SlowWave__) */
