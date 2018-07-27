#include "tree.h"


#include <stdio.h>
#include <stdlib.h>

BinTree CreatBinTree()//�������������
{
    tElementType Data;

    BinTree BT,T;
    Queue Q=CreateQueue(100);
    printf("������һ���ڵ㣨��������Ϊint�ͣ������ڵ�Ϊ������0\n");
    scanf("%d",&Data);
    if(Data!=NoInfo)
    {
        BT=(BinTree)malloc(sizeof(struct TNode));
        BT->Data=Data;
        BT->Left=BT->Right=NULL;
        AddQ(Q,BT);
    }
    else return NULL;
    while(!IsEmpty(Q))
    {
        T=DeleteQ(Q);
        printf("��������\n");
        scanf("%d",&Data);
        if(Data==NoInfo) T->Left=NULL;
        else{
            T->Left=(BinTree)malloc(sizeof(struct TNode));
            T->Left->Data=Data;
            T->Left->Left=T->Left->Right=NULL;
            AddQ(Q,T->Left);
        }
        printf("�����Һ���\n");
        scanf("%d",&Data);
        if(Data==NoInfo)T->Right=NULL;
        else{
            T->Right=(BinTree)malloc(sizeof(struct TNode));
            T->Right->Data=Data;
            T->Right->Left=T->Right->Right=NULL;
            AddQ(Q, T->Right);
        }

    }
    return BT;
}


void InorderTraversal(BinTree BT)//�������
{
    if(BT){
        InorderTraversal(BT->Left);
        printf("%d  ",BT->Data);
        InorderTraversal(BT->Right);
    }
}

void PreorderTraversal(BinTree BT)//�������
{
    if(BT){
        printf("%d  ",BT->Data);
        PreorderTraversal(BT->Left);

        PreorderTraversal(BT->Right);
    }
    return 0;
}

void PostorderTraversal(BinTree BT)//�������
{
    if(BT){
        PostorderTraversal(BT->Left);
        PostorderTraversal(BT->Right);
        printf("%d  ",BT->Data);
    }
}



void PreorderPrintLeaves(BinTree BT)//Ҷ�ڵ����
{
    if(BT)
    {
        if(!BT->Left &&!BT->Right)
            printf("%d  ",BT->Data);
        PreorderPrintLeaves(BT->Left);
        PreorderPrintLeaves(BT->Right);
    }
}
int GetHeight(BinTree BT)//��߶�
{
    int HL,HR,MaxH;
    if(BT){
        HL=GetHeight(BT->Left);
        HR=GetHeight(BT->Right);
        MaxH=HL>HR?HL:HR;
        return(MaxH+1);
    }
    else return 0;
}

void InorderTraversal2(BinTree BT)//��������ǵݹ�
{
    BinTree T;
    Stack S=CreateStack(100);
    T=BT;
    while(T ||!sIsEmpty(S))
    {
        while(T)
        {
            Push(S, T);
            T=T->Left;
        }
        T=Pop(S);
        printf("%d",T->Data);
        T=T->Right;
    }
}
