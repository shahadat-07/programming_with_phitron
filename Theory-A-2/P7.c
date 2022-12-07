#include <stdio.h>

double median(int ara[], int N)
{
    int i, j, temp, oddMidIndex, evenMidIndex;
    double Median;
    for(j = 0;  j < N; j++)
    {
        for(i = 0; i < (N -1); i++)
        {
            if(ara[i] > ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }

    if(N % 2 != 0)
    {
        oddMidIndex = (N + 1) / 2;
        Median = ara[oddMidIndex - 1];
    }
    else if(N % 2 == 0)
    {
        evenMidIndex = (N + 1) / 2 - 1;
        Median = (ara[evenMidIndex] + ara[evenMidIndex + 1]) / 2.00;
    }

    return Median;
}


int main()
{
    printf("Give the length of the array:\n");
    int N;
    scanf("%d", &N);

    double Median;

    int ara[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }
    Median = median(ara, N);
    printf("The median value is: %0.2lf\n", Median);

    return 0;
}