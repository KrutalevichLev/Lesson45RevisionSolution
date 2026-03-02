#include "util.h"

int main() {
	double array[DEFAULT_SIZE];

	int size;

	do {
		cout << "Enter size of array: ";
		cin >> size;
	} while (size <= 0);

	init_random(array, size, -100, 100);

	cout << "Your array is: \n" << convert(array, size) << endl;
	cout << "Your sum is: " << calculate_sum_of_numbers_lowest_avg(array, size);


	return 1;
}