#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef int bool ;
#define true 0
#define false 1

typedef int qPosition;
typedef struct QNode *PtrToQNode;
typedef int ElementType;

struct QNode
{
    ElementType *Data;
    qPosition Front,Rear;
    int MaxSize;
};
typedef PtrToQNode Queue;

Queue CreateQueue(int MaxSize);


bool IsFull(Queue Q);

bool AddQ(Queue Q,ElementType X);


bool IsEmpty(Queue Q);

ElementType DeleteQ(Queue Q);



#endif // QUEUE_H_INCLUDED
