//
//  SquareRipple.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "SquareRippleScene.h"

SquareRippleScene::SquareRippleScene(){
    
    ofBackground(255);
}

void SquareRippleScene::update(){
    for (vector<SquareRipple>::iterator it = ripples.begin(); it != ripples.end(); ++it) {
        if(it->isDead()){
            ripples.erase(it);
            -- it;
        }
    }
    for (vector<SquareRipple>::iterator it = ripples.begin(); it != ripples.end(); ++it) {
        it -> update();
    }
}

void SquareRippleScene::draw(){
    for (vector<SquareRipple>::iterator it = ripples.begin(); it != ripples.end(); ++it) {
        it -> draw();
    }
}

void SquareRippleScene::keyPressed(int key){
    if(key==' '){
        ripples.push_back(SquareRipple());
    }
}
//--------------------------------------------------------------
void SquareRippleScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void SquareRippleScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void SquareRippleScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SquareRippleScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SquareRippleScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SquareRippleScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void SquareRippleScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void SquareRippleScene::dragEvent(ofDragInfo dragInfo){
    
}
