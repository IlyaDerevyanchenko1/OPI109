

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float y;
	float comp = 1;
	cout << "Enter y:";
	cin >> y;

	for (int m = 4; m < 6; ++m) {
		comp = comp * log(m*y);
	}

	float res = cos(comp);

	printf("Composition = %f\n", res);
	system("pause");
	return 0;

}




