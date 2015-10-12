//
//  StarDustParticleSystem.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__StarDustParticleSystem__
#define __idolHackerthon__StarDustParticleSystem__

#include "ofMain.h"
#include "StarDust.h"

#define STAR_DUST_NUM 10

class StarDustParticleSystem {
    ofVec2f pos;
    vector<StarDust> starDusts;
    
public:
    StarDustParticleSystem();
    StarDustParticleSystem(ofVec2f _pos);
    void update();
    void draw();
    bool isDead();
    
};


#endif /* defined(__idolHackerthon__StarDustParticleSystem__) */
