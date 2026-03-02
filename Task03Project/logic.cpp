// Task 03 [The matching values]
// Совпадающие значения
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая проверяет, что среди значений 
// элементов вектора есть хотя бы одна пара совпадающих.

#include "logic.h"

bool is_the_same_elements(int array[DEFAULT_SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int n = 0; n < size; n++)
		{
			if (array[i] == array[n] && i != n) {
				return true;
			}
		}
	}
	return false;
}