#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofEnableSmoothing();
    ofSetCircleResolution(128);
    
    Heart::init();
    StarDust::init();
    DropStarDust::init();
    TunnelScroll::init();
    
    scene = new WhiteScene();
}

//--------------------------------------------------------------
void ofApp::update(){
    scene -> update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    scene -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    scene -> keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == '1'){
        scene = new CandyDropScene();
    }else if(key == '2'){
        scene = new CircleRippleScene();
    }else if(key == '3'){
        scene = new StreamLeftScene();
    }else if(key == '4'){
        scene = new StarDustScene();
    }else if(key == '5'){
        scene = new SquareRippleScene();
    }else if(key == '6'){
        scene = new StreamRightScene();
    }else if(key == '7'){
        scene = new DropStarDustScene();
    }else if(key == '8'){
        scene = new HeartScene();
    }else if(key == '9'){
        scene = new WhiteScene();
    }else if(key == 'q'){
        scene = new TunnelScrollScene(true);
    }else if(key == 'w'){
        scene = new TunnelScrollScene(false);
    }else if(key == 'e'){
        scene = new HaloScrollScene();
    }else if(key == 'r'){
        scene = new RotationCircleScene();
    }else if(key == 't'){
        scene = new SlowWaveScene();
    }else if(key == 'y'){
        scene = new ColorChangeScene();
    }else if(key == 'u'){
        scene = new LightRayScene();
    }
    scene -> keyReleased(key);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    scene -> mouseMoved(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    scene -> mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    scene -> mousePressed(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    scene -> mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    scene -> windowResized(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    scene -> gotMessage(msg);
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
