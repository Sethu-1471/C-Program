#include <stdio.h>
#include <math.h>

float calculateSD(float data[])
{
    float mean, sum = 0.0, sumOne, var = 0.0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        sum += data[i];
    }
    mean = sum / 5;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        sumOne += pow(data[i] - mean, 2);
    }
    var = sumOne / 5;
    return (sqrt(var));
}

int main()
{
    float data[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%f", &data[i]);
    }
    printf("%.6f", calculateSD(data));
    return 0;
}