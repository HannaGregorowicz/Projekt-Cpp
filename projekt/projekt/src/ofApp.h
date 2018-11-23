#pragma once

#include "ofMain.h"
#include <vector>
#include <ofEasyCam.h>
#include "../kolo.h"
#include <string.h>
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		 
		ofEasyCam cam;
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		vector<kolo*> koleczka;
	
		ofImage img;
		ofImage pop;
		int a = 0;
		bool up = false;
		bool dr = true;
		ofPixels piksele_org;
		ofPixels piksele_new;
};
