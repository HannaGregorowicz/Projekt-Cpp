#pragma once

#include "ofMain.h"
#include <vector>
class kolo
{
public:
	kolo();
	~kolo();

	//Pozycje i promien
	float x;
	float y;
	float radius;

	//Kolor
	int col;

	//Transparentnosc
	int t;

	void setup();

};

