//
//  DropStarDustScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "DropStarDustScene.h"

//--------------------------------------------------------------
DropStarDustScene::DropStarDustScene(){
    stardusts.clear();
    isStop = false;
    ofBackground(255);
}

//--------------------------------------------------------------
void DropStarDustScene::update(){
    if(ofRandom(0,100) < 20 && !isStop){
        stardusts.push_back(DropStarDust());
    }
    for (vector<DropStarDust>::iterator it = stardusts.begin(); it != stardusts.end(); ++it) {
        if(it->isDead()){
            stardusts.erase(it);
            -- it;
        }
    }
    for (vector<DropStarDust>::iterator it = stardusts.begin(); it != stardusts.end(); ++it) {
        it -> update();
    }
}

//--------------------------------------------------------------
void DropStarDustScene::draw(){
    for (vector<DropStarDust>::iterator it = stardusts.begin(); it != stardusts.end(); ++it) {
        it -> draw();
    }
    
    cout << stardusts.size() << endl;
}

//--------------------------------------------------------------
void DropStarDustScene::keyPressed(int key){
    if(key == ' '){
        isStop = true;
    }
}

//--------------------------------------------------------------
void DropStarDustScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void DropStarDustScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void DropStarDustScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void DropStarDustScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void DropStarDustScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void DropStarDustScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void DropStarDustScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void DropStarDustScene::dragEvent(ofDragInfo dragInfo){
    
}
