#pragma once

#include "ofMain.h"
#include <vector>
class kolo
{
public:
	kolo();
	~kolo();
	//Pozycje i promieñ
	float x;
	float y;
	float radius;

	//Kolor
	int r;
	int g;
	int b;
	int t;

	void setup();

};

