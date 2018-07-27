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
Stack CreateStack(int MaxSize);//建立堆栈
bool sIsFull(Stack S);//验满
bool push(Stack S,sElementType X);//入栈
bool sIsEmpty(Stack S);//验空
sElementType Pop(Stack S);//出栈

#endif // STACK_H_INCLUDED
