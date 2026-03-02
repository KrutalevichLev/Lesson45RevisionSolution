// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая реверсирует элементы вектора 
// начиная с позиции a и заканчивая позицией b, включая данные позиции.
#include "logic.h"

void reverse(int array[DEFAULT_SIZE], int size, int a, int b) {
	int temp;
	for (int i = a; i < (b - a) / 2; i++)
	{
		temp = array[i];
		array[i] = array[size - 1 - b];
		array[size - 1 - i] = temp;
	}
}
