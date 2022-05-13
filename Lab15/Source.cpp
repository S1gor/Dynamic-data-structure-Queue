#include<iostream>

/*Задание:
Дан файл из целых чисел.Используя очередь, за один
просмотр файла напечатать сначала все отрицательные числа, затем
все положительные числа, сохраняя исходный порядок в каждой группе.*/

struct Element
{
	int data;
	Element* next = NULL;
};

struct Queue
{
	Element* head = NULL;
	Element* tail = NULL;
};

int main()
{
	Queue queue;



	return 0;
}