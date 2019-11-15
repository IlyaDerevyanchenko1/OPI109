#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int b = 5;
	double  x = 4, h = 0.4, y;

	do {
		y = pow(sin(x), 2) + cos(pow(x, 2)) + 2;
		printf("x=%f   y=%f\n", x, y);
		x += h;

	}
	while (x <= b)

	return -1;
}
