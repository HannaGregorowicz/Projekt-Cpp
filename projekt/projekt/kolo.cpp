#include "kolo.h"



kolo::kolo(){
	
}


void kolo::setup()

{
	x = ofRandom(1000);
	y = ofRandom(1000);
	radius = ofRandom(20,100);

	int tempr = ofRandom(255);
	int tempg = ofRandom(255);
	int tempb = ofRandom(255);

	r = 0.299*tempr + 0.587*tempg + 0.114*tempb;
	g = r;
	b = r;
	t = ofRandom(100,255);
}

kolo::~kolo(){

}
