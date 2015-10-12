//
//  StreamRigthScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "StreamRigthScene.h"

StreamRightScene::StreamRightScene(){
    isStop = false;
    ofBackground(255);
}

void StreamRightScene::update(){
    if(!isStop){
        particles.push_back(ShapeParticle(false));
        particles.push_back(ShapeParticle(false));
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

void StreamRightScene::draw(){
    for(vector<ShapeParticle>::iterator it=particles.begin(); it != particles.end(); ++it){
        it -> draw();
    }
}

void StreamRightScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void StreamRightScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void StreamRightScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void StreamRightScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StreamRightScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StreamRightScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StreamRightScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void StreamRightScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void StreamRightScene::dragEvent(ofDragInfo dragInfo){
    
}
