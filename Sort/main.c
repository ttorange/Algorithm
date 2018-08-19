#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A[]={99,45,789,121,496,494,94,13,54,48,15,95,11,468,77,13,1,654,821,84};

   int i;
   for(i=0;i<20;i++)
   {
       printf("%6d",A[i]);
   }
   printf("\n¿ìËÙÅÅÐò\n");
    QuickSort(A,20);
    for(i=0;i<20;i++)
    printf("%5d",A[i]);

    printf("\nÏ£¶ûÅÅÐòºóÎª\n");
   ShellSort(A,20);
   for(i=0;i<20;i++)
    printf("%5d",A[i]);

printf("\n²åÈëÅÅÐò\n");
   InsertSort(A,20);
   for(i=0;i<20;i++)
    printf("%5d",A[i]);


}
