#include <stdio.h>
#include <stdlib.h>

int N, num[666];

int solve(int left, int right)
{
    //���г���Ϊ1 
    if(left == right)
        return num[left];

    //����Ϊ������ģ��С������
    int mid = left + right >> 1;//(l+r)/2
    int lans = solve(left, mid);
    int rans = solve(mid + 1, right);

    //���ָ������
    int sum = 0, lmax = num[mid], rmax = num[mid + 1];
    int i;
    for( i = mid; i >= left; i--) {
        sum += num[i];
        if(sum > lmax) lmax = sum;
    }
    sum = 0;
    for(i = mid + 1; i <= right; i++) {
        sum += num[i];
        if(sum > rmax) rmax = sum;
    }

    //����������������ֵ
    int ans = lmax + rmax;
    if(lans > ans) ans = lans;
    if(rans > ans) ans = rans;

    return ans;
}

int main()
{
    //��������
    int i;
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
        scanf("%d", &num[i]);

    printf("%d\n", solve(1, N));

    return 0;
}
