#include "tree.h"


#include <stdio.h>
#include <stdlib.h>

BinTree CreatBinTree()//层序二叉树创建
{
    tElementType Data;

    BinTree BT,T;
    Queue Q=CreateQueue(100);
    printf("建立第一个节点（数据类型为int型），若节点为空输入0\n");
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
        printf("输入左孩子\n");
        scanf("%d",&Data);
        if(Data==NoInfo) T->Left=NULL;
        else{
            T->Left=(BinTree)malloc(sizeof(struct TNode));
            T->Left->Data=Data;
            T->Left->Left=T->Left->Right=NULL;
            AddQ(Q,T->Left);
        }
        printf("输入右孩子\n");
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


void InorderTraversal(BinTree BT)//中序遍历
{
    if(BT){
        InorderTraversal(BT->Left);
        printf("%d  ",BT->Data);
        InorderTraversal(BT->Right);
    }
}

void PreorderTraversal(BinTree BT)//先序遍历
{
    if(BT){
        printf("%d  ",BT->Data);
        PreorderTraversal(BT->Left);

        PreorderTraversal(BT->Right);
    }
    return 0;
}

void PostorderTraversal(BinTree BT)//后序遍历
{
    if(BT){
        PostorderTraversal(BT->Left);
        PostorderTraversal(BT->Right);
        printf("%d  ",BT->Data);
    }
}



void PreorderPrintLeaves(BinTree BT)//叶节点输出
{
    if(BT)
    {
        if(!BT->Left &&!BT->Right)
            printf("%d  ",BT->Data);
        PreorderPrintLeaves(BT->Left);
        PreorderPrintLeaves(BT->Right);
    }
}
int GetHeight(BinTree BT)//求高度
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

void InorderTraversal2(BinTree BT)//中序遍历非递归
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
