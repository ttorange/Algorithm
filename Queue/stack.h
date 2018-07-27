#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef int bool ;
#define true 0
#define false 1
#include "tree.h"


typedef int sElementType;
typedef int sPosition;
typedef struct SNode *PtrToSNode;
struct SNode{
  sElementType *Data;
  sPosition Top;
  int MaxSize;
};
typedef PtrToSNode Stack;
Stack CreateStack(int MaxSize);//������ջ
bool sIsFull(Stack S);//����
bool push(Stack S,sElementType X);//��ջ
bool sIsEmpty(Stack S);//���
sElementType Pop(Stack S);//��ջ

#endif // STACK_H_INCLUDED
