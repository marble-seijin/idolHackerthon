//
//  StarDustScene.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__StarDustScene__
#define __idolHackerthon__StarDustScene__

#include "SceneBase.h"
#include "StarDustParticleSystem.h"


class StarDustScene : public SceneBase {
    
    vector<StarDustParticleSystem> stardusts;
    bool isSmall;
    int r;
public:
    StarDustScene();
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
    
};

#endif /* defined(__idolHackerthon__StarDustScene__) */
