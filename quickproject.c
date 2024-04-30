#include<stdio.h>
int add(int a, int b);
int main()
{
    int result;
    result = add(1,5);
    printf("%d",result);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
