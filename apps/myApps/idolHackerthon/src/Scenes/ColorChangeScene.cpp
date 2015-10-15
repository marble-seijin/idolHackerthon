//
//  ColorChangeScene.cpp
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#include "ColorChangeScene.h"


//--------------------------------------------------------------
ColorChangeScene::ColorChangeScene(){
    isStop = false;
    ofBackground(255);
    scrolls.push_back(ColorChange());
}

//--------------------------------------------------------------
void ColorChangeScene::update(){
    for(vector<ColorChange>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        if(it -> isDead()){
            scrolls.erase(it);
            -- it;
        }
    }
    
    for(vector<ColorChange>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> update(isStop);
    }
}

//--------------------------------------------------------------
void ColorChangeScene::draw(){
    for(vector<ColorChange>::iterator it=scrolls.begin(); it != scrolls.end(); ++it){
        it -> draw();
    }
}

//--------------------------------------------------------------
void ColorChangeScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void ColorChangeScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ColorChangeScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ColorChangeScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ColorChangeScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ColorChangeScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ColorChangeScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ColorChangeScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ColorChangeScene::dragEvent(ofDragInfo dragInfo){
    
}
