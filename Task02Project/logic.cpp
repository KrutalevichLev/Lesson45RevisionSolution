// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных(дробных) значений. Необходимо спроектировать
// и реализовать функцию, которая находит сумму всех элементов вектора,
// абсолютная величина которых меньше среднего арифметического всех элементов.
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.
#include "util.h"

double find_avg(double array[], int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += array[i];
	}

	avg /= size;

	return avg;
}

double calculate_sum_of_numbers_lowest_avg(double array[], int size) {
	double sum = 0;

	double avg = find_avg(array, size);

	for (int i = 0; i < size; i++)
	{
		if (array[i] < avg) {
			sum += array[i];
		}
	}
	return sum;
}