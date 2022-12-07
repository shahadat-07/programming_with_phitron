#include <stdio.h>

#define SUM(a, b,...) add_three_number( a, b, (0, ##__VA_ARGS__) )

int add_three_number (int a, int b, int c)
{
  return a + b + c;
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = SUM(a, b);
    printf("%d", sum);

    return 0;
}


// Assume that you have a function named add_three_nums() which will take three numbers as arguments. The description of the function is also given here. Just copy it and paste it in your code.
// int add_three_nums(int a, int b, int c)
// {
// 	return a+b+c;
// }
// Now, write a C program where you will take only two inputs and add those two numbers using this function. You can add them directly using the + operator. You must use this function to add them, but the challenge is you are only given two inputs.
