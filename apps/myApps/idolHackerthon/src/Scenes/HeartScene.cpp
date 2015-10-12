//
//  HeartScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "HeartScene.h"

//--------------------------------------------------------------
HeartScene::HeartScene(){
    ofBackground(255);
}

//--------------------------------------------------------------
void HeartScene::update(){
    for (vector<Heart>::iterator it = hearts.begin(); it != hearts.end(); ++it) {
        if(it -> isDead()){
            hearts.erase(it);
            --it;
        }
    }
    for (vector<Heart>::iterator it = hearts.begin(); it != hearts.end(); ++it) {
        it -> update();
    }
}

//--------------------------------------------------------------
void HeartScene::draw(){
    for (vector<Heart>::iterator it = hearts.begin(); it != hearts.end(); ++it) {
        it -> draw();
    }
}

//--------------------------------------------------------------
void HeartScene::keyPressed(int key){
    if(key==OF_KEY_LEFT){
        hearts.push_back(Heart(true, true));
        hearts.push_back(Heart(true, false));
    }else if(key==OF_KEY_RIGHT){
        hearts.push_back(Heart(false, true));
        hearts.push_back(Heart(false, false));
    }
}

//--------------------------------------------------------------
void HeartScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void HeartScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void HeartScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HeartScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HeartScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HeartScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void HeartScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void HeartScene::dragEvent(ofDragInfo dragInfo){
    
}
