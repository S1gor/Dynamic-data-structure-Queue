#ifndef _QUEUE_H_
#define _QUEUE_H_

struct Element
{
	int data;
	Element* next = 0;
};

struct Queue
{
	Element* head = 0;
	Element* tail = 0;
};

void pushQueue(Queue& q, int d);

int pullQueue(Queue& q);

int peekQueue(const Queue& q);

void printQueue(const Queue& q);

void clearQueue(Queue& q);




#endif
