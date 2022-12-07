#include <stdio.h>

struct Student{
    double weight;
    int roll;
};

int main()
{
    struct Student s[10];

    for(int i = 0; i < 10; i++)
    {
        s[i].roll = 1 + i;
        s[i].weight = 20 + i * 5;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d %.2lf\n", s[i].roll, s[i].weight);
    }

    return 0;
}