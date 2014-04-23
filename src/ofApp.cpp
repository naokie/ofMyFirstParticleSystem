#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor::white, ofColor(255, 255, 200), OF_GRADIENT_CIRCULAR);
    
    ofSetColor(ofColor::blue);
    ofFill();
    ofCircle(ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5, 30);
    
    ofEnableAlphaBlending();
    for (int i = 0; i < 5; i++) {
        ofSetColor(i * 8, i * 4, 255, 127);
        ofLine(ofGetWindowWidth(), 0, i * 40 + 10, i * 40 + 10);
        ofBezier(i * 20, i * 20, i * 300, i * 300, i * 100, i * 100, ofGetWindowWidth(), ofGetWindowHeight());
    }
    ofDisableAlphaBlending();
    
    ofSetColor(255, 0, 255);
    ofDrawBitmapString("hi!", 100, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

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