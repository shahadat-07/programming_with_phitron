#include <stdio.h>

int fact(int x)
{ 
    int sum = 1;
    for(int i = 1; i <= x; i++)
    {
        sum = sum * i;
    }

    return sum;
}

double ratio(int x, int y)
{
    double firstFact, secondFact, ratio;
    firstFact = fact(x);
    secondFact = fact(y);
    ratio = firstFact / secondFact;

    return ratio;
}



int main()
{
    int x, y;
    double ratioNum;
    scanf("%d %d", &x, &y);
    ratioNum = ratio(x, y);

    printf("The ratio of %d and %d is: %0.3lf ", x, y, ratioNum);

    return 0;
}


// Write a function that will take an integer as an argument and return the factorial of the integer. Then write another function that will take two integers as arguments and then return the ratio of the factorials of the first argument with the second one. You need to make two calls to the first function inside the second function to find the factorials of the numbers.