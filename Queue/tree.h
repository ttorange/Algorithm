#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "Queue.h"
#include "stack.h"
#define NoInfo 0

typedef int bool ;
#define true 0
#define false 1
typedef  int tElementType;

typedef struct TNode *Position;
typedef Position BinTree;
struct TNode
{
  tElementType Data;
  BinTree Left;
  BinTree Right;
};

BinTree CreatBinTree();//����������Ĵ���
void PreorderTraversal(BinTree BT);//�������
void InorderTraversal(BinTree BT);//�������


void PostorderTraversal(BinTree BT);//�������
void LevelorderTraversal(BinTree BT);//�������
void PreorderPrintLeaves(BinTree BT);//Ҷ�ڵ����
int GetHeight(BinTree BT);//��߶�

void InorderTraversal2(BinTree BT);//��������ǵݹ�
#endif // TREE_H_INCLUDED
