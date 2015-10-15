//
//  LightRayScene.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "LightRayScene.h"


//--------------------------------------------------------------
LightRayScene::LightRayScene(){
    isStop = false;
    ofBackground(255);
    cnt = 0;
}

//--------------------------------------------------------------
void LightRayScene::update(){
    if(!isStop){
        if (cnt==0){
            scrolls.push_back(LightRay());
        }
        cnt++;
        if(cnt > 60){
            cnt = 0;
        }
    }
    
    for(vector<LightRay>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        if(it -> isDead()){
            scrolls.erase(it);
            -- it;
        }
    }
    
    for(vector<LightRay>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> update();
    }
}

//--------------------------------------------------------------
void LightRayScene::draw(){
    for(vector<LightRay>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> draw();
    }
}

//--------------------------------------------------------------
void LightRayScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void LightRayScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void LightRayScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void LightRayScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void LightRayScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void LightRayScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void LightRayScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void LightRayScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void LightRayScene::dragEvent(ofDragInfo dragInfo){
    
}
