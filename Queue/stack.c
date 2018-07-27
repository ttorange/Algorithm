#include <stdio.h>
#include<stdlib.h>
#include "stack.h"

Stack CreateStack(int MaxSize)
{
    Stack S=(Stack)malloc(sizeof(struct SNode));
    S->Data=(sElementType *)malloc(sizeof(struct SNode));
    S->Data=(sElementType *)malloc(MaxSize *sizeof(sElementType));
    S->Top=-1;
    S->MaxSize=MaxSize;
    return S;
}
bool sIsFull(Stack S)
{
    return(S->Top==S->MaxSize-1);
}
sElementType Push(Stack S,sElementType X)
{
    if(sIsFull(S)){
        printf("堆栈满");
        return false;
    }
    else{
        S->Data[++(S->Top)]=X;
        return true;
    }
}
bool sIsEmpty(Stack S)
{
    return(S->Top==-1);
}
sElementType Pop(Stack S)
{
    if(sIsEmpty(S)){
        printf("堆栈空");
        return -1;
    }
    else
    return(S->Data[(S->Top)--]);

}




