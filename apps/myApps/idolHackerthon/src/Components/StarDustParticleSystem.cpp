//
//  StarDustParticleSystem.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "StarDustParticleSystem.h"

StarDustParticleSystem::StarDustParticleSystem(){
    pos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    for (int i=0; i<STAR_DUST_NUM; ++i) {
        starDusts.push_back(StarDust(pos));
    }
}
StarDustParticleSystem::StarDustParticleSystem(ofVec2f _pos){
    pos = _pos;
    for (int i=0; i<STAR_DUST_NUM; ++i) {
        starDusts.push_back(StarDust(pos));
    }
}

void StarDustParticleSystem::update(){
    for (int i=0; i<STAR_DUST_NUM; ++i) {
        starDusts[i].update();
    }
}

void StarDustParticleSystem::draw(){
    for (int i=0; i<STAR_DUST_NUM; ++i) {
        starDusts[i].draw();
    }
    
}

bool StarDustParticleSystem::isDead(){
    return starDusts[0].isDead();
}