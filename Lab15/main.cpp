#include"Queue.h"
#include<iostream>

/*Задание:
Используя динамическую структуру «очередь», зашифровать
содержимое текста: каждый символ заменить его кодом + 1.*/

void fillTheQueue(Queue& queue)
{
	printf("Введите строку:\n");
	char str[50];
	gets_s(str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
		pushQueue(queue, str[i] + 1);
}

int main()
{
	system("chcp 1251"); system("cls");
	Queue queue;

	fillTheQueue(queue);
	
	printf("\nЗаполненная очередь:\n");
	printQueue(queue);

	clearQueue(queue);

	return 0;
}