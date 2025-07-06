#pragma once

#include "ofMain.h"

struct point {
    int x = 0,y = 0;

};

struct program1
{

};

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
		
		void setPoint(point& p1, point& p2);

private:
    // Move all your member variables here
    int frameCounter;
    std::map<int, std::string> keyNames;
    std::string lastKey;
    point p1;
    point p2;
	int cx;
	int cy;
	int programState = 0;
	int maxState = 5;
};
