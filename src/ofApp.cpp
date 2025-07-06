#include "ofApp.h"
#include <iostream>
#include <string>
#include <map>
#include <cmath>

//--------------------------------------------------------------
void ofApp::setup(){
    keyNames[OF_KEY_UP] = "UP";
    keyNames[OF_KEY_DOWN] = "DOWN";
    keyNames[OF_KEY_LEFT] = "LEFT";
    keyNames[OF_KEY_RIGHT] = "RIGHT";
    keyNames[OF_KEY_RETURN] = "ENTER";
    keyNames[' '] = "SPACE";
    keyNames['w'] = "W";    keyNames[OF_KEY_DOWN] = "DOWN";
    keyNames[OF_KEY_LEFT] = "LEFT";
    keyNames[OF_KEY_RIGHT] = "RIGHT";
    keyNames[OF_KEY_RETURN] = "ENTER";
    keyNames[' '] = "SPACE";
    keyNames['w'] = "W";
    keyNames['a'] = "A";
    keyNames['s'] = "S";
    keyNames['d'] = "D";
    keyNames['a'] = "A";
    keyNames['s'] = "S";
    keyNames['d'] = "D";

    frameCounter = 0;
    // to start draw at x0 y0
    cx = ofGetWidth()/2;
    cy = ofGetHeight()/2;
    ofSetBackgroundAuto(false);
    ofBackground(0);

}




void ofApp::setPoint(point& p1, point& p2) {
    int r = 100;
    float angle = frameCounter * 0.05f;
    p1.x = cx + (r * sin(angle));
    p1.y = cy - (r * cos(angle));
    p2.x = cx - (r * sin(angle));
    p2.y = cy + (r * cos(angle));
}

//--------------------------------------------------------------
void ofApp::update() {
    frameCounter++;
    switch (programState) {
        case 0:
            setPoint(p1, p2);
            break;
        case 1:
            ofBackground(0);
            break;
        default:
            break;
    }
    
} 


//--------------------------------------------------------------
void ofApp::draw(){
    switch (programState) {
        case 0:
            ofSetColor(0, 0, 0, 5); 
            ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
            ofSetColor(255);
            ofDrawLine(p1.x, p1.y, p2.x, p2.y);
            break;
        case 1:
            ofBackground(0);
            break;
        default:
            break;
    }


}



//---------------------keyPressed-----------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    //std::cout << char(key) << std::flush;
    if(char(key == 'c'))
    {
        programState++;
        if(programState == maxState)
        {
            programState = 0;
        }

        std::cout << programState << std::flush;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
