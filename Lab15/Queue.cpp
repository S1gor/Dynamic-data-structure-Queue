#include"Queue.h"
#include<iostream>

void pushQueue(Queue& q, int d)
{
	Element* e = (Element*)malloc(sizeof(Element));
	e->data = d;
	e->next = NULL;

	if (q.head == NULL)
	{
		q.tail = e;
		q.head = e;
	}
	else
	{
		q.tail->next = e;
		q.tail = e;
	}
}

int pullQueue(Queue& q)
{
	if (q.head == NULL)
		return 0;

	int d = q.head->data;
	
	if (q.head == q.tail)
		q.tail = NULL;

	Element* e = q.head;
	q.head = q.head->next;
	free(e);

	return d;
}

int peekQueue(const Queue& q)
{
	if (q.head == NULL)
		return 0;
	int d = q.head->data;
	return d;
}

void printQueue(const Queue& q)
{
	int i = 1;
	for (Element* cur = q.head; cur != NULL; cur = cur->next, i++)
		printf("%d - %d\n", i, cur->data + 1);
}

void clearQueue(Queue& q)
{
	for (Element* cur = q.head; cur != NULL;)
	{
		Element* e = cur;
		cur = cur->next;
		free(e);
	}
	q.head = NULL;
	q.tail = NULL;
}