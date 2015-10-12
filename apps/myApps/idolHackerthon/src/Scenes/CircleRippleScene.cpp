//
//  CircleRippleScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "CircleRippleScene.h"

CircleRippleScene::CircleRippleScene(){
    
    ofBackground(255);
}

void CircleRippleScene::update(){
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

void CircleRippleScene::draw(){
    for (vector<SquareRipple>::iterator it = ripples.begin(); it != ripples.end(); ++it) {
        it -> draw();
    }
}

void CircleRippleScene::keyPressed(int key){
    if(key==' '){
        ripples.push_back(SquareRipple(false));
    }
}
//--------------------------------------------------------------
void CircleRippleScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void CircleRippleScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void CircleRippleScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void CircleRippleScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void CircleRippleScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void CircleRippleScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void CircleRippleScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void CircleRippleScene::dragEvent(ofDragInfo dragInfo){
    
}
