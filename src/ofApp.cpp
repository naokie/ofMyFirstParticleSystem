#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetFrameRate(60);
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
    ofSetCircleResolution(16);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < balls.size(); i++) {
        balls[i].resetForce();
        balls[i].updateForce();
        balls[i].updatePos();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < balls.size(); i++) {
        balls[i].draw();
    }
    
    ofSetHexColor(0xffffff);
    ofDrawBitmapString("particle num = " + ofToString(balls.size()), 10, 15);
    ofDrawBitmapString("fps = " + ofToString(ofGetFrameRate()), 10, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }
    if (key == 'c') {
        balls.clear();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    for (int i = 0; i < 10; i++) {
        ofVec2f pos = ofVec2f(x, y);
        float length = ofRandom(1);
        float angle = ofRandom(PI * 2);
        ofVec2f vel = ofVec2f(cos(angle) * length, sin(angle) * length);
        Ball b;
        b.setup(pos, vel);
        b.radius = 2;
        b.friction = 0.002;
        balls.push_back(b);
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}