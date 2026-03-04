#include "util.h"

void init_random(double array[DEFAULT_SIZE], int length, int a, int b) {
	double random_double;
	for (int i = 0; i < length; i++)
	{
		random_double = rand() / 10 * 0.1;
		array[i] = rand() % (b - a + 1) + a + random_double;
	}
}

string convert(double array[DEFAULT_SIZE], int length) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		msg += to_string(array[i]) + " ";
	}

	return msg;
}