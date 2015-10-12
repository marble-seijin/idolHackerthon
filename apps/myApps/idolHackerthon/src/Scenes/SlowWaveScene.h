//
//  SlowWaveScene.h
//  idolHackerthon
//
//  Created by Nagano on 2015/10/08.
//
//

#ifndef __idolHackerthon__SlowWaveScene__
#define __idolHackerthon__SlowWaveScene__

#include "ofMain.h"
#include "SceneBase.h"
#include "SlowWave.h"

class SlowWaveScene : public SceneBase {
    vector<SlowWave> scrolls;

public:
    SlowWaveScene();
    
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

#endif /* defined(__idolHackerthon__SlowWaveScene__) */
