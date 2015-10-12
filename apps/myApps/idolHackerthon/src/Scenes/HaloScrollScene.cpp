//
//  HaloScrollScene.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "HaloScrollScene.h"


//--------------------------------------------------------------
HaloScrollScene::HaloScrollScene(){
    isStop = false;
    ofBackground(255);
    startX = ofGetWidth()/2;
    startY = ofGetHeight()/2;
    position = 0;
}

//--------------------------------------------------------------
void HaloScrollScene::update(){
    if(!isStop){
        scrolls.push_back(HaloScroll(startX, startY));
        scrolls.push_back(HaloScroll(startX, startY));
        scrolls.push_back(HaloScroll(startX, startY));
        scrolls.push_back(HaloScroll(startX, startY));
        scrolls.push_back(HaloScroll(startX, startY));
        scrolls.push_back(HaloScroll(startX, startY));
    }
    
    for(vector<HaloScroll>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        if(it -> isDead()){
            scrolls.erase(it);
            -- it;
        }
    }
    
    for(vector<HaloScroll>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> update();
    }
}

//--------------------------------------------------------------
void HaloScrollScene::draw(){
    for(vector<HaloScroll>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> draw();
    }
}

//--------------------------------------------------------------
void HaloScrollScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }if(key==OF_KEY_LEFT){
        if (startX>0) {
            startX -=32;
        }
    }if(key==OF_KEY_RIGHT){
        if (startX<ofGetWidth()) {
            startX +=32;
        }
    }if(key==OF_KEY_UP){
        if (startY>0) {
            startY -=20;
        }
    }if(key==OF_KEY_DOWN){
        if (startY<ofGetHeight()) {
            startY +=20;
        }
    }
}

//--------------------------------------------------------------
void HaloScrollScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void HaloScrollScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void HaloScrollScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HaloScrollScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HaloScrollScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void HaloScrollScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void HaloScrollScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void HaloScrollScene::dragEvent(ofDragInfo dragInfo){
    
}
