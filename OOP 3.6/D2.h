#include "B1.h"
#pragma once
#include <iostream>
using namespace std;

class D2 : private B1
{
	int d2;
public:
	D2(int x, int y)
		:B1(y)
	{d2 = x;}
	void show_D2();
};

