#include "kolo.h"



kolo::kolo(){
	
}


void kolo::setup()

{
	x = ofRandom(223);
	y = ofRandom(223);
	radius = ofRandom(223/6);

	int tempr = ofRandom(255);
	int tempg = ofRandom(255);
	int tempb = ofRandom(255);

	col = 0.299*tempr + 0.587*tempg + 0.114*tempb;
	
	t = ofRandom(100,255);
}

kolo::~kolo(){

}
