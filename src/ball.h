#ifndef ball_h
#define ball_h

#include "ofMain.h"

class Ball {
    public:
        Ball();
    
        void moveTo(int _xDestiny, int _yDestiny);
        void draw();
        
        int x;
        int y;
        ofColor color;
};

#endif