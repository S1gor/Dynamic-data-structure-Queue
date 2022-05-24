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
		scanf_s("%d", &choice);
	} while (choice <= 0);
	return choice;
}

void fillTheQueue(Queue& queue, int num)
{
	printf("������� %d ��������� �������:\n", num);
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
	
	printf("\n����������� �������:\n");
	printQueue(queue);

	clearQueue(queue);

	return 0;
}