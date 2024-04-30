#include<stdio.h>
int sumterms(int n, int a, int d);
int main()
{
    int n, a, d, sum;
    printf(" what is the total\n");
    scanf("%d", &n);
    printf("\n what is the first term\n");
    scanf("%d", &a);
    printf("\n what is the common difference\n");
    scanf("%d", &d);

    sum = sumterms( n, a, d);
    printf("%d", sum);
    return 0;
}

int sumterms(int n, int a, int d)
{

    return (n * ((2 * a) + (n-1)*d))/2;
}
