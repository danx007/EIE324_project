#include<stdio.h>
float add(float a, float b);
int main()
{
    float result;
    result = add(3.4,5.2);
    printf("%f",result);
    return 0;
}
float add(float a, float b)
{
    return a + b;
}
