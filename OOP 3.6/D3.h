#include "D1.h"
#include "D2.h"
#include "B2.h"
#pragma once
#include <iostream>
using namespace std;

class D3 : public D1, public D2, public B2
{
	int d3;
public:
	D3(int	x, int y, int z, int i, int j, int a, int b)
		: D1(y, z), D2(i, j), B2(a)
	{d3 = x;}
	void show_D3();
};