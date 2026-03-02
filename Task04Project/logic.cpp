// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.
#include "logic.h"

int find_max(int array[DEFAULT_SIZE], int size) {
	int value = array[0];
	int max_index = 0;

	for (int i = 0; i < size; i++)
	{
		if (value < array[i]) {
			value = array[i];
			max_index = i;
		}
	}

	return max_index;
}


int find_min(int array[DEFAULT_SIZE], int size) {
	int value = array[0];
	int min_index = 0;

	for (int i = 0; i < size; i++)
	{
		if (value > array[i]) {
			value = array[i];
			min_index = i;
		}
	}

	return min_index;
}


void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	int max_index = find_max(array, size);
	int min_index = find_min(array, size);

	int temp = array[max_index];

	array[max_index] = array[min_index];
	array[min_index] = temp;
}