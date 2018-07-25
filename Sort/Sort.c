#include "Sort.h"
#include <stdio.h>



void Swap(ElementType *a,ElementType *b)
{
    ElementType t=*a;
    *a=*b;
    *b=t;
}

void InsertSort(ElementType A[],int N)//插入排序
{
    int P,i;
    ElementType Tmp;
    for(P=1;P<N;P++)
    {
        Tmp=A[P];
        for(i=P;i>0&&A[i-1]>Tmp;i--)
            A[i]=A[i-1];
        A[i]=Tmp;
    }
}
void ShellSort(ElementType A[],int N)
{
    int Si,D,P,i;
    ElementType Tmp;
    int Sedgewick[]={929,505,209,109,41,19,5,1,0};//增量序列
    for(Si=0;Sedgewick[Si]>=N;Si++);//令增量序列小于序列长度

    for(D=Sedgewick[Si];D>0;D=Sedgewick[++Si])
    for(P=D;P<N;P++){
        Tmp=A[P];
        for(i=P;i>=D&&A[i-D]>Tmp;i-=D)
            A[i]=A[i-D];
        A[i]=Tmp;
    }
}

void BubbleSort(ElementType A[],int N)//冒泡排序
{
    int P,i;
    int flag;
    for(P=N-1;P>=0;P--)
    {
        flag=1;
        for(i=0;i<P;i++){
            if(A[i]>A[i+1]){
                Swap(&A[i],&A[i+1]);
                flag=0;
            }
        }
        if(flag==0)break;
    }
}
ElementType Median3(ElementType A[],int Left,int Right)
{
    int Center=(Left+Right)/2;
    if(A[Left]>A[Center])
    Swap(&A[Left],&A[Center]);
    if(A[Left]>A[Right]);
    Swap(&A[Left],&A[Right]);
    if(A[Center]>A[Right]);
    Swap(&A[Center],A[Right]);

    Swap(&A[Center],A[Right-1]);
    return A[Right-1];
}

void Qsort(ElementType A[],int Left,int Right)
{
    int Pivot,Cutoff,Low,High;
    if(Cutoff<=Right-Left){
        Pivot=Median3(&A,Left,Right);
        Low=Left;
        High=Right-1;
        while(1){
            while(A[++Low]<Pivot);
            while(A[--High]>Pivot);
            if(Low<High)Swap(&A[Low],&A[High]);
            else break;
        }
        Swap(&A[Low],&A[Right-1]);
        Qsort(A,Left,Low-1);
        Qsort(A,Low+1,Right);
    }

}

void QuickSort(ElementType A[],int N)
{
    Qsort(A,0,N-1);
}
