#include<stdio.h>
int main()
{
    int A[]={0,1,2,3,4,5,6,7,8,9}, i, sum;
    sum = 0;
    for(i=0;i<10;i++)
    {

        sum = sum + A[i];
    }
    printf("%d", sum);
    return 0;
}
