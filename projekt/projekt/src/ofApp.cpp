#include "ofApp.h"
#include "../kolo.h"
#include <algorithm>

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
int ofApp::mierz(int x) {

	double fitness1 = 0;		// Tu zeruje zmienna


	// Tutaj patrzy czy ma mierzyc podobienstwo dla populacji matki czy dla zmutowanej
	if (x == 1)
	{
		piksele_new = pop.getPixels();
	}
	else if (x == 2)
	{
		piksele_new = popnew.getPixels();
	}
	

	for (int i = 0; i < (ofGetHeight()*ofGetHeight() * 3); i++)	  // Tutaj jest *3, poniewaz kazdy piksel zajmuje 4
	{															  // miejsca tablicy - r, g, b
		//Ta petla leci po kazdym pikselu obrazka i pobiera wartosc

		if (i % 3 == 0)
		{
			if (int(piksele_new[i]) != 0) {

				fitness1 += pow((int(piksele_org[i]) - int(piksele_new[i])), 2);		//Glowne rownanie mierzenia "roznicy" miedzy obrazkami
			}
		}
	}
	fitness1 /= 1000000.0;	//Dziele przez milion, zeby mozna bylo latwiej zarzadzac ta liczba
	return fitness1;
}

//--------------------------------------------------------------
void ofApp::mutuj() {

	koleczka_zmutowane.clear();
	for (int i = 0; i < koleczka.size(); i++)		// Ta petla to rozwiazanie tymczasowe
	{
		koleczka_zmutowane.push_back(new kolo);
		koleczka_zmutowane[i]->setup();
		koleczka_zmutowane[i]->x = koleczka[i]->x;
		koleczka_zmutowane[i]->y = koleczka[i]->y;
		koleczka_zmutowane[i]->radius = koleczka[i]->radius;
		koleczka_zmutowane[i]->col = koleczka[i]->col;
		koleczka_zmutowane[i]->t = koleczka[i]->t;
	}
	int i = ofRandom(koleczka_zmutowane.size());		// Ktore kolko ma byc zmutowane
	int x = ofRandom(5);	// Ktory parametr ma byc zmutowany? x, y, r, kolor czy transparentnosc
	
	if (x == 0)		// Pozycja X
	{
		koleczka_zmutowane[i]->x = ofRandom(223);
	}
	else if (x == 1)	// Pozycja Y
	{
		koleczka_zmutowane[i]->y = ofRandom(223);
	}
	else if (x == 2)	// Promien
	{
		koleczka_zmutowane[i]->radius = ofRandom(223/6);
	}
	else if (x == 3)	// Kolor
	{
		int tempr = ofRandom(255);
		int tempg = ofRandom(255);
		int tempb = ofRandom(255);
		koleczka_zmutowane[i]->col = 0.299*tempr + 0.587*tempg + 0.114*tempb;
	}
	else	// Transparentnosc
	{
		koleczka_zmutowane[i]->t = ofRandom(100, 255);
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	a++;
	
	if (up==true)
	{ 
		fit1 = mierz(1);
		mutuj();
		fit2 = mierz(2);

		if (fit2 < fit1)
		{
			//Dobrze by bylo wrzucic to w osobna funkcje
			for (int i = 0; i < koleczka.size(); i++)
			{
				koleczka[i]->x = koleczka_zmutowane[i]->x;
				koleczka[i]->y = koleczka_zmutowane[i]->y;
				koleczka[i]->radius = koleczka_zmutowane[i]->radius;
				koleczka[i]->col = koleczka_zmutowane[i]->col;
				koleczka[i]->t = koleczka_zmutowane[i]->t;
			}
			cout << fit2 << endl;
		}

		if (a == 99999)
		{
			koniec.grabScreen(0, 0, 224, 224);
			koniec.saveImage("murlok.jpg");
		}
		up = false;
		
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	//cam.begin();
	
	if (dr == true)
	{
		for (int i = 0; i < koleczka.size(); i++)
		{
			ofSetColor(koleczka[i]->col, koleczka[i]->col, koleczka[i]->col, koleczka[i]->t);
			ofDrawCircle(koleczka[i]->x, koleczka[i]->y, koleczka[i]->radius);
		}

		pop.grabScreen(0, 0, 224, 224);
		
		ofSetColor(255, 255, 255);
		ofDrawCircle(112, 112, 250);


		for (int i = 0; i < koleczka_zmutowane.size(); i++)
		{
			ofSetColor(koleczka_zmutowane[i]->col, koleczka_zmutowane[i]->col, koleczka_zmutowane[i]->col, koleczka_zmutowane[i]->t);
			ofDrawCircle(koleczka_zmutowane[i]->x, koleczka_zmutowane[i]->y, koleczka_zmutowane[i]->radius);
		}

		popnew.grabScreen(0, 0, 224, 224);
		
		//pop.saveImage("murlok.jpg");
		
		//dr = false;
		
		if (a < 100000)
		{
			up = true;
		}
			
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