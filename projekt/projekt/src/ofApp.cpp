#include "ofApp.h"
#include "../kolo.h"
//--------------------------------------------------------------
void ofApp::setup(){
	//cam.setAutoDistance(true);
	//img.load("images/corgi.png");
	ofBackground(ofColor::white);
	
	for (int i = 0; i < 128; i++)
	{
		koleczka.push_back(new kolo);
	}

	for (int i = 0; i < koleczka.size(); i++)
	{
		koleczka[i]->setup();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	//cam.begin();
	//img.draw(0, 0);
	for (int i = 0; i < koleczka.size(); i++)
	{
		ofSetColor(koleczka[i]->r, koleczka[i]->g, koleczka[i]->b,koleczka[i]->t);
		ofDrawCircle(koleczka[i]->x, koleczka[i]->y, koleczka[i]->radius);
	}
	

	//cam.end();
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
