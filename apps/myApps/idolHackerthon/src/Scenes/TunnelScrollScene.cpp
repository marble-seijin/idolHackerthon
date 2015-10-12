//
//  TunnelScrollScene.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "TunnelScrollScene.h"


//--------------------------------------------------------------
TunnelScrollScene::TunnelScrollScene(bool type){
    isStop = false;
    isType = type;
    ofBackground(255);
    startX = ofGetWidth()/2;
    startY = ofGetHeight()/2;
    position = 0;
}

//--------------------------------------------------------------
void TunnelScrollScene::update(){
    if(!isStop){
        if (isType) {
            scrolls.push_back(TunnelScroll(startX, startY, 0xff));
            scrolls.push_back(TunnelScroll(startX, startY, 0xff));
        }else{
            scrolls.push_back(TunnelScroll(startX, startY, position));
            scrolls.push_back(TunnelScroll(startX, startY, position+4));
            scrolls.push_back(TunnelScroll(startX, startY, position+8));
            if (position<3) {
                position++;
            }else{
                position = 0;
            }
        }
    }
    
    for(vector<TunnelScroll>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        if(it -> isDead()){
            scrolls.erase(it);
            -- it;
        }
    }
    
    for(vector<TunnelScroll>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> update();
    }
}

//--------------------------------------------------------------
void TunnelScrollScene::draw(){
    for(vector<TunnelScroll>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> draw();
    }
}

//--------------------------------------------------------------
void TunnelScrollScene::keyPressed(int key){
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
void TunnelScrollScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void TunnelScrollScene::dragEvent(ofDragInfo dragInfo){
    
}
