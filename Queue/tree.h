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

BinTree CreatBinTree();//二叉树层序的创建
void PreorderTraversal(BinTree BT);//先序遍历
void InorderTraversal(BinTree BT);//中序遍历


void PostorderTraversal(BinTree BT);//后序遍历
void LevelorderTraversal(BinTree BT);//层序遍历
void PreorderPrintLeaves(BinTree BT);//叶节点输出
int GetHeight(BinTree BT);//求高度

void InorderTraversal2(BinTree BT);//中序遍历非递归
#endif // TREE_H_INCLUDED
