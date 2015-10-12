//
//  CandyDropScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "CandyDropScene.h"

//--------------------------------------------------------------
CandyDropScene::CandyDropScene(){
    candies.clear();
    isStop = false;
    ofBackground(255);
}

//--------------------------------------------------------------
void CandyDropScene::update(){
    if(ofRandom(0,100) < 15 && !isStop){
        candies.push_back(DropCandy());
    }
    for (vector<DropCandy>::iterator it = candies.begin(); it != candies.end(); ++it) {
        if(it->isDead()){
            candies.erase(it);
            -- it;
        }
    }
    for (vector<DropCandy>::iterator it = candies.begin(); it != candies.end(); ++it) {
        it -> update();
    }
}

//--------------------------------------------------------------
void CandyDropScene::draw(){
    for (vector<DropCandy>::iterator it = candies.begin(); it != candies.end(); ++it) {
        it -> draw();
    }
}

//--------------------------------------------------------------
void CandyDropScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void CandyDropScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void CandyDropScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void CandyDropScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void CandyDropScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void CandyDropScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void CandyDropScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void CandyDropScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void CandyDropScene::dragEvent(ofDragInfo dragInfo){
    
}
