#include"Queue.h"
#include<iostream>

/*�������:
��������� ������������ ��������� ���������, �����������
���������� ������: ������ ������ �������� ��� ����� + 1.*/

int numberOfQueueItems()
{
	int choice;
	do {
		printf("������� ���������� ��������� �������.\n�����:");
		scanf_s("%d%*c", &choice);
	} while (choice <= 0);
	return choice;
}

void fillTheQueue(Queue& queue, int num)
{
	char str[10];
	printf("������� %d ��������� �������:\n", num);
	gets_s(str);

	for (int i = 0; i < strlen(str); i++)
		pushQueue(queue, str[i] + 1);
}

int main()
{
	system("chcp 1251"); system("cls");
	Queue queue;

	int num = numberOfQueueItems();
	fillTheQueue(queue, num);
	
	printf("\n����������� �������:\n");
	printQueue(queue);

	clearQueue(queue);

	return 0;
}