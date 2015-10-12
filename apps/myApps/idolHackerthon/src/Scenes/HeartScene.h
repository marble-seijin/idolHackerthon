//
//  HeartScene.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__HeartScene__
#define __idolHackerthon__HeartScene__

#include "ofMain.h"
#include "SceneBase.h"
#include "Heart.h"

class HeartScene : public SceneBase {
    vector<Heart> hearts;
    
public:
    HeartScene();
    
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
    
};

#endif /* defined(__idolHackerthon__HeartScene__) */
