// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая реверсирует элементы вектора 
// начиная с позиции a и заканчивая позицией b, включая данные позиции.

#include "logic.h"

void reverse(int array[DEFAULT_SIZE], int size, int a, int b) {
	int temp;

	if (a < 0 || b < 0 || b >= size || size <= 0 || a >= size) {
		return;
	}

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;

	}

	int n = (a + b) / 2;
	for (int i = a; i <= n; i++)
	{
		temp = array[i];
		array[i] = array[b];
		array[b] = temp;
		b--;
	}

}