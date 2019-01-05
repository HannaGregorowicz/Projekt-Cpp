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

		vector<kolo> koleczka;			// Vector w ktorym przechowuje wszystkie kolka
		vector<kolo> koleczka_zmutowane;		// Vector kolek po mutacji

		ofImage img;
		ofImage pop;	// Populacja
		ofImage popnew;		// Nowa populacja
		ofImage koniec;		// Obrazek koncowy
		
		int a = 0;		// Zmienna ktora liczy ile razy program juz sie wykonal
		bool up = false;	// Update
		bool dr = true;		// Draw - te dwie zmienne to zeby program robil po kolei a nie naraz
		
		ofPixels piksele_org;		// Piksele - oryginalny obrazek
		ofPixels piksele_new;		// Piksele - nowy obrazek
		
		int fit1;	// Zmienna "roznicy" miedzy obrazkami
		int fit2;	// Druga zmienna "roznicy"
		int mierz(int x);	// Funkcja do mierzenia tej roznicy
		
		void mutuj();	// Funkcja robi¹ca mutacje

};
