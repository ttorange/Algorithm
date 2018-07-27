/*

童彤


909061879@qq.com

该程序包含树的前中后序（递归）遍历
非递归遍历
树的创建（层序创建）
求树高
输出叶节点的操作
有tree   queue   stack 几个文件




*/

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"



int main()
{

    BinTree T;
    T=CreatBinTree();
    printf("先序遍历\n");
    PreorderTraversal(T);
    printf("\n中序遍历\n");
    InorderTraversal(T);

    printf("\n后序遍历\n");
    PostorderTraversal(T);
    printf("\n求高度\n");
    int i;
    i=GetHeight(T);
    printf(" %d ",i);
    printf("\n叶节点输出\n");
    PreorderPrintLeaves(T);
    printf("\n中序非递归");
    InorderTraversal2(T);
    return 0;
}

