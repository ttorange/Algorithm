/*

ͯͮ


909061879@qq.com

�ó����������ǰ�к��򣨵ݹ飩����
�ǵݹ����
���Ĵ��������򴴽���
������
���Ҷ�ڵ�Ĳ���
��tree   queue   stack �����ļ�




*/

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"



int main()
{

    BinTree T;
    T=CreatBinTree();
    printf("�������\n");
    PreorderTraversal(T);
    printf("\n�������\n");
    InorderTraversal(T);

    printf("\n�������\n");
    PostorderTraversal(T);
    printf("\n��߶�\n");
    int i;
    i=GetHeight(T);
    printf(" %d ",i);
    printf("\nҶ�ڵ����\n");
    PreorderPrintLeaves(T);
    printf("\n����ǵݹ�");
    InorderTraversal2(T);
    return 0;
}

