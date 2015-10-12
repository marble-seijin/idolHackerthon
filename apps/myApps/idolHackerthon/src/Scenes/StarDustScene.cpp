//
//  StarDustScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "StarDustScene.h"

StarDustScene::StarDustScene(){
    r = 200;
    isSmall = false;
    ofBackground(255);
}

void StarDustScene::update(){
    for (vector<StarDustParticleSystem>::iterator it = stardusts.begin(); it != stardusts.end(); ++it) {
        if(it->isDead()){
            stardusts.erase(it);
            -- it;
        }
    }
    for (vector<StarDustParticleSystem>::iterator it = stardusts.begin(); it != stardusts.end(); ++it) {
        it->update();
    }
    
    if(isSmall){
        r -= 10;
    }
}

void StarDustScene::draw(){
    ofBackground(0);
    ofSetColor(255);
    if(r > 0){
    ofCircle(ofGetWidth()/2+300, ofGetHeight()-100, r);
    ofCircle(ofGetWidth()/2-300, ofGetHeight()-100, r);
    }
    for (vector<StarDustParticleSystem>::iterator it = stardusts.begin(); it != stardusts.end(); ++it) {
        it->draw();
    }
}

void StarDustScene::keyPressed(int key){
    
}

//--------------------------------------------------------------
void StarDustScene::keyReleased(int key){
    if(key == ' '){
        stardusts.push_back(StarDustParticleSystem(ofVec2f(ofGetWidth()/2 - 300, 100)));
        stardusts.push_back(StarDustParticleSystem(ofVec2f(ofGetWidth()/2 + 300, 100)));
    }
    if(key == 'z'){
        isSmall = true;
    }
}

//--------------------------------------------------------------
void StarDustScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void StarDustScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StarDustScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StarDustScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StarDustScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void StarDustScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void StarDustScene::dragEvent(ofDragInfo dragInfo){
    
}
