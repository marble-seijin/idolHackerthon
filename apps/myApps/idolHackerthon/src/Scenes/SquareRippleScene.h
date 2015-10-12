//
//  SquareRippleScene.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#ifndef __idolHackerthon__SquareRippleScene__
#define __idolHackerthon__SquareRippleScene__

#include "ofMain.h"
#include "SceneBase.h"
#include "SquareRipple.h"

class SquareRippleScene : public SceneBase {
    vector<SquareRipple> ripples;
    
public:
    SquareRippleScene();
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

#endif /* defined(__idolHackerthon__SquareRipple__) */
