#include<stdio.h>

int a = 1; //global

void display(){
    printf("Set World, %d", a++);
    printf("\n %d", a);
}

int main(){
    display();
    printf("\n %d", a);
    return 0;
}