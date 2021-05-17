#include <math.h>


int YPoint(int x, double* w, int carpan = 1)
{
	
	return (int)((double)(1 * (double)carpan * w[2] - w[0] * x) / (double)(w[1]));

}

float sgnFunc(float net)
{
	if (net > 0)
		return 1;
	else
		return -1;

}

float deltaSgnFunc(float net)
{
	return 2 / (1 + exp(-net)) - 1;
}