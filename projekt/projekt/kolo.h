#pragma once

#include "ofMain.h"
#include <vector>
class kolo
{
public:
	kolo();
	~kolo();
	//Pozycje i promień
	float x;
	float y;
	float radius;

	//Kolor
	int col;

	//Transparentność
	int t;

	void setup();

};

