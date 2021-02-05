#include<stdio.h>

struct distance
{
    /* data */
    char place[10];
    int inch;
}personOne, personTwo;


int main(){
    scanf("%s", &personOne.place);
    printf("%s", personOne.place);
    printf("Person One Inch");
    scanf("%d", &personOne.inch);
    printf("Person Two Inch");
    scanf("%d", &personTwo.inch);
    int inch = personTwo.inch + personOne.inch;
    printf("%d", inch);
    return 0;
}