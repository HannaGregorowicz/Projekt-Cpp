#pragma once

#include "ofMain.h"
#include <vector>
class kolo
{
public:
	kolo();
	~kolo();
	//Pozycje i promie�
	float x;
	float y;
	float radius;

	//Kolor
	int col;

	//Transparentno��
	int t;

	void setup();

};

