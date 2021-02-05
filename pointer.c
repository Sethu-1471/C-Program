#include<stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    printf("%p \n", &x);
    int *p, r;
    r = 5;
    p = &r;
    printf("%d", *p);
    return 0;
}