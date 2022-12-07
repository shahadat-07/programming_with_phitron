#include <stdio.h>

char grade(int x)
{
    char grade;
    if(x <= 39 && x >= 0)
    {
        grade = 'F';
    }
    else if(x <= 59 && x >= 40)
    {
        grade = 'C';
    }
    else if(x <= 79 && x >= 60)
    {
        grade = 'B';
    }
    else if(x <= 100 && x >= 80)
    {
        grade = 'A';
    }

    return grade;
}

int main()
{
    int N;
    char result;
    scanf("%d", &N);
    result = grade(N);

    printf("Your grade is: %c\n", result);

    return 0;
}