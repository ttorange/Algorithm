#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#define true 1
#define false 0
typedef int ElementType;
void Swap(ElementType *a,ElementType *b);

void InsertSort(ElementType A[],int N);//��������
void ShellSort(ElementType A[],int N);//ϣ������
void BubbleSort(ElementType A[],int N);//ð������

ElementType Median3(ElementType A[],int Left,int Right);
void Qsort(ElementType A[],int Left,int Right);
void QuickSort(ElementType A[],int N);
#endif // SORT_H_INCLUDED
