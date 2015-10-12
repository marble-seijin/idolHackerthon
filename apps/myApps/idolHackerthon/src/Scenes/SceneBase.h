//
//  SceneBase.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__SceneBase__
#define __idolHackerthon__SceneBase__

#include "ofMain.h"

class SceneBase {
    
    
public:
    SceneBase(){};
    virtual void update(){};
    virtual void draw(){};
    
    virtual void keyPressed(int key){};
    virtual void keyReleased(int key){};
    virtual void mouseMoved(int x, int y ){};
    virtual void mouseDragged(int x, int y, int button){};
    virtual void mousePressed(int x, int y, int button){};
    virtual void mouseReleased(int x, int y, int button){};
    virtual void windowResized(int w, int h){};
    virtual void dragEvent(ofDragInfo dragInfo){};
    virtual void gotMessage(ofMessage msg){};
};

#endif /* defined(__idolHackerthon__SceneBase__) */
