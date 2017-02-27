#include <iostream>
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "Trygonometria.h"
#else
#define _USE_MATH_DEFINES
#include <math.h>
#endif

int main()
{
double result;
#ifdef USE_TRIGONOMETRY_DEGREE
	result = sin_degree(45.0);
#else
	result = sin(M_PI/4.0);
#endif
	std::cout << result << std::endl;
return 0;
}