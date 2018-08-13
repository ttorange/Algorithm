#include<stdio.h>
 
#define Max_ 10
// ��ӡ���
void Show(int  arr[], int n)
{
    int i;
    for ( i=0; i<n; i++ )
        printf("%d  ", arr[i]);
    printf("\n");
}
 
// �鲢�����еĺϲ��㷨
void Merge(int array[], int left, int m, int right)
{
    int aux[Max_] = {0};  // ��ʱ���� ������ʹ����ʱ���飬��������������ϲ�Ϊһ����������Ƚ��鷳��
    int i; //��һ����������
    int j; //�ڶ�����������
    int k; //��ʱ��������
    
    for (i = left, j = m+1, k = 0; k <= right-left; k++) // �ֱ� i, j, k ָ�����������ײ���
    {
        //�� i �����һ�������β�������ڶ�����������Ԫ�ظ��Ƶ� ��ʱ������
        if (i == m+1)
        {
            aux[k] = array[j++];
            continue;
        }
        //�� j ����ڶ��������β��������һ����������Ԫ�ظ��Ƶ� ��ʱ������
        if (j == right+1)
        {
            aux[k] = array[i++];
            continue;
        }
        //�����һ������ĵ�ǰԪ�� �� �ڶ�������ĵ�ǰԪ��С���� ��һ������ĵ�ǰԪ�ظ��Ƶ� ��ʱ������
        if (array[i] < array[j])
        {
            aux[k] = array[i++];
        }
        //����ڶ�������ĵ�ǰԪ�� �� ��һ������ĵ�ǰԪ��С���� �ڶ�������ĵ�ǰԪ�ظ��Ƶ� ��ʱ������
        else
        {
            aux[k] = array[j++];
        }
    }
    
    //���������ʱ���� Ԫ�� ˢ�� ����������� array �У�
    //i = left , �����������array ����ʼλ��
    //j = 0�� ��ʱ�������ʼλ��
    for (i = left, j = 0; i <= right; i++, j++)
    {
        array[i] = aux[j];
    }
}
 
// �鲢����
void MergeSort(int array[], int start, int end)
{
    if (start < end)
    {
        int i;
        i = (end + start) / 2;
        // ��ǰ�벿�ֽ�������
        MergeSort(array, start, i);
        // �Ժ�벿�ֽ�������
        MergeSort(array, i + 1, end);
        // �ϲ�ǰ��������
        Merge(array, start, i, end);
    }
}
 
int main()
{   //��������
    int arr_test[Max_] = { 8, 4, 2, 3, 5, 1, 6, 9, 0, 7 };
    //����ǰ��������
    Show( arr_test, Max_ );
    MergeSort( arr_test, 0, Max_-1 );
    //�������������
    Show( arr_test, Max_ );
    return 0;
}

