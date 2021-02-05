#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 5, *ptr, sum;
    ptr = (int *)malloc(a * sizeof(int));
    if(ptr == NULL){
        exit(0);
    }
    for (int i = 0; i < a; i++)
    {
        /* code */
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum is %d", sum);
    free(ptr);
    return 0;
}