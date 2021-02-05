#include<stdio.h>

int main()
{
    int a[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d", &a[i]);

        sum += a[i];
    }
    printf("sum of a is %d", sum);
    return 0;
}