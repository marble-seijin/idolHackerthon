//
//  RotationCircleScene.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "RotationCircleScene.h"


//--------------------------------------------------------------
RotationCircleScene::RotationCircleScene(){
    isStop = false;
    ofBackground(255);

    bool flg = false;
    int location = 0;
    for(;;location++){
        scrolls.push_back(RotationCircle(location, &flg));
        if (flg) {
            break;
        }
    }
}

//--------------------------------------------------------------
void RotationCircleScene::update(){
    for(vector<RotationCircle>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        if(it -> isDead()){
            scrolls.erase(it);
            -- it;
        }
    }
    
    for(vector<RotationCircle>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> update(isStop);
    }
}

//--------------------------------------------------------------
void RotationCircleScene::draw(){
    for(vector<RotationCircle>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> draw();
    }
}

//--------------------------------------------------------------
void RotationCircleScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void RotationCircleScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void RotationCircleScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void RotationCircleScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void RotationCircleScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void RotationCircleScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void RotationCircleScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void RotationCircleScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void RotationCircleScene::dragEvent(ofDragInfo dragInfo){
    
}
