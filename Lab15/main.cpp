#include"Queue.h"
#include<iostream>

/*Задание:
Используя динамическую структуру «очередь», зашифровать
содержимое текста: каждый символ заменить его кодом + 1.*/

int numberOfQueueItems()
{
	int choice;
	do {
		printf("Введите количество элементво очереди.\nВыбор:");
		scanf_s("%d", &choice);
	} while (choice <= 0);
	return choice;
}

void fillTheQueue(Queue& queue, int num)
{
	printf("Введите %d элементов очереди:\n", num);
	for (int i = 0; i < num; i++)
	{
		int d;
		printf("%d - ", i + 1); scanf_s("%d", &d);
		pushQueue(queue, d);
	}
}

int main()
{
	system("chcp 1251"); system("cls");

	Queue queue;

	int num = numberOfQueueItems();
	fillTheQueue(queue, num);
	
	printf("\nЗаполненная очередь:\n");
	printQueue(queue);

	clearQueue(queue);

	return 0;
}