//
//  LightRayScene.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__LightRayScene__
#define __idolHackerthon__LightRayScene__

#include "ofMain.h"
#include "SceneBase.h"
#include "LightRay.h"

class LightRayScene : public SceneBase {
    vector<LightRay> scrolls;
    int cnt;
    
public:
    LightRayScene();
    
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    bool isStop;
    bool isType;
};

#endif /* defined(__idolHackerthon__LightRayScene__) */
