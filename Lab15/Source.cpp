#include<iostream>

/*�������:
��� ���� �� ����� �����.��������� �������, �� ����
�������� ����� ���������� ������� ��� ������������� �����, �����
��� ������������� �����, �������� �������� ������� � ������ ������.*/

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