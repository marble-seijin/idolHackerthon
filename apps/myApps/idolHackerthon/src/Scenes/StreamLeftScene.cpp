//
//  StreamLeftScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "StreamLeftScene.h"

StreamLeftScene::StreamLeftScene(){
    isStop = false;
    ofBackground(255);
}

void StreamLeftScene::update(){
    if(!isStop){
        particles.push_back(ShapeParticle(true));
        particles.push_back(ShapeParticle(true));
    }
    
    for(vector<ShapeParticle>::iterator it=particles.begin(); it != particles.end(); ++it){
        if(it -> isDead()){
            particles.erase(it);
            -- it;
        }
    }
    
    for(vector<ShapeParticle>::iterator it=particles.begin(); it != particles.end(); ++it){
        it -> update();
    }
}

void StreamLeftScene::draw(){
    for(vector<ShapeParticle>::iterator it=particles.begin(); it != particles.end(); ++it){
        it -> draw();
    }
}

void StreamLeftScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void StreamLeftScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void StreamLeftScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void StreamLeftScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StreamLeftScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StreamLeftScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StreamLeftScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void StreamLeftScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void StreamLeftScene::dragEvent(ofDragInfo dragInfo){
    
}
