#include <stdio.h>
#include <stdlib.h>

void Swap(int *a,int *b);
int partiton(int A[],int p,int r);
void QuickSort(int A[],int p,int r);

void Swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partiton(int A[],int p,int r){

	int x=A[r];
	int i=p-1;
	int j=p;
	for(j;j<r-1;j++){
		if (A[j]<=x)
		i++;
		Swap(&A[i],&A[j]);
	}
	Swap(&A[i+1],&A[r]);
	return i+1;
}
void QuickSort(int A[],int p,int r)
{
	if (p<r)
	{
		int q=partition(A,p,r);
		QuickSort(A,p,q-1);
		QuickSort(A,q,r);
	}
}
int main()
{
   int A[]={99,45,789,121,496,494,94,13,54,48,15,95,11,468,77,13,1,654,821,84};

   int i;
   for(i=0;i<20;i++)
   {
       printf("%6d",A[i]);
   }
   
}
