#pragma once

#include "ofMain.h"

class Ball {
    public:
        void setup(ofVec2f position, ofVec2f velocity);
        void resetForce();
        void addForce(ofVec2f force);
        void updateForce();
        void updatePos();
        void checkBounds(float xmin, float ymin, float xmax, float ymax);
        void draw();
        
        ofVec2f position;
        ofVec2f velocity;
        ofVec2f force;
        float friction;
        float radius;
};
