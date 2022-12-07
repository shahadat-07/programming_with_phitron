#include <stdio.h>

int prime_number(int ara[], int n);

double average_of_even(int ara[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int ara[1000];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", ara + i);
    }

    int NoOfprime = prime_number(ara, n);
    double average = average_of_even(ara, n);

    printf("Prime numbers: %d\n", NoOfprime);
    printf("Average of all even integers: %.2lf\n", average);

    return 0;
}

int prime_number(int ara[], int n)
{
 int prime_counter = 0;
 for(int i = 0; i < n; i++)
 {
    if(*(ara + i) % 2 != 0) prime_counter++;
 }

 return prime_counter;
}

double average_of_even(int ara[], int n)
{
    double even_counter = 0;
    int even_sum = 0;
    double average = 0;
    for(int i = 0; i < n; i++)
    {
        if(*(ara + i) % 2 == 0)
        {
            even_sum += *(ara + i);
            even_counter++;
        }
    }
    average = even_sum / even_counter;

    return average;
}



// Problem Statement
// You are given an array of size n. And the next line will contain n positive integers. Find the number of prime numbers in the array and find the average of all even integers in the array. Implement it using two functions(one is for prime and second one is for finding the average) and traverse the array using pointers.

// See the sample input-output for more clarification.

// Sample Input-
// -----------------------
// 5
// 2 5 9 11 14

// Sample Output-
// -----------------------
// Prime numbers: 3
// Average of all even integers: 8.00
