//
//  ColorChange.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__ColorChange__
#define __idolHackerthon__ColorChange__

#include "ofMain.h"

class ColorChange {
    ofColor colorR;
    ofColor colorG;
    ofColor colorB;
    float alpha;
    float alphaR;
    float alphaG;
    float alphaB;
    float loop;
    bool isStop;

public:
    ColorChange();

    static void init();
    void update(bool isStopFlg);
    void draw();
    bool isDead();
};

#endif /* defined(__idolHackerthon__ColorChange__) */
