#include "util.h"

void init_random(double array[DEFAULT_SIZE], int length, int a, int b) {
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
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