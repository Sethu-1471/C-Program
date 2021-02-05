#include<stdio.h>

int main(){
    int count = 0;
    for (int i = 0; i < 5; i++);
    {
        printf("%d", count);
        for (int j = 0; j < 5; j++);
        {
            printf("%d", count);
            count++;
        }
    }
    printf("%d", count);
    return 0;
}