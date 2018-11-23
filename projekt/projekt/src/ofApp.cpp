#include "ofApp.h"
#include "../kolo.h"
//--------------------------------------------------------------
void ofApp::setup(){
	//cam.setAutoDistance(true);
	img.load("images/corgi.jpg");
	piksele_org = img.getPixels();

	ofBackground(ofColor::white);
	ofEnableAlphaBlending();

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
	a++;
	

	if (up==true)
	{ 
		int fitness1 = 0;		// Zmienna "roznicy" miedzy obrazkami
		
		piksele_new = pop.getPixels();


		for (int i = 0; i < (ofGetHeight()*ofGetHeight() * 3); i++)	  // Tutaj jest *4, poniewaz kazdy piksel zajmuje 4
		{															  // miejsca tablicy - r, g, b i transparentnosc

			//Ta petla leci po kazdym pikselu obrazka i pobiera wartosc

			if (i % 3 == 0)
			{
				if (int(piksele_new[i]) != 0) {
					
					fitness1 += pow((int(piksele_org[i]) - int(piksele_new[i])), 2);		//Glowne rownanie mierzenia "roznicy" miedzy obrazkami
				}
			}
		}
		fitness1 /= 1000000;	//Dziele przez milion, zeby mozna bylo latwiej zarzadzac ta liczba
		cout << fitness1 << endl;
		up = false;
		
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	//cam.begin();
	//img.draw(0, 0);
	if (dr == true)
	{
		for (int i = 0; i < koleczka.size(); i++)
		{
			ofSetColor(koleczka[i]->col, koleczka[i]->col, koleczka[i]->col, koleczka[i]->t);
			ofDrawCircle(koleczka[i]->x, koleczka[i]->y, koleczka[i]->radius);
		}
		pop.grabScreen(0, 0, 224, 224);
		pop.saveImage("murlok.jpg");
		
		dr = false;
		up = true;
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