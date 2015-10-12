//
//  SlowWaveScene.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "SlowWaveScene.h"


//--------------------------------------------------------------
SlowWaveScene::SlowWaveScene(){
    isStop = false;
    ofBackground(255);
    scrolls.push_back(SlowWave());
}

//--------------------------------------------------------------
void SlowWaveScene::update(){
    for(vector<SlowWave>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        if(it -> isDead()){
            scrolls.erase(it);
            -- it;
        }
    }
    
    for(vector<SlowWave>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> update(isStop);
    }
}

//--------------------------------------------------------------
void SlowWaveScene::draw(){
    for(vector<SlowWave>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> draw();
    }
}

//--------------------------------------------------------------
void SlowWaveScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void SlowWaveScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void SlowWaveScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void SlowWaveScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SlowWaveScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SlowWaveScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SlowWaveScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void SlowWaveScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void SlowWaveScene::dragEvent(ofDragInfo dragInfo){
    
}
