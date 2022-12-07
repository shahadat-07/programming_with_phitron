#include <stdio.h>


void find_consequtive_even(int ara[], int N)
{
    for(int i = 0; i < N; i++)
    {
        int first_even, second_even, third_even, fourth_even;
        first_even = (ara[i] - 12) / 4;
        printf("%d + %d + %d + %d = %d\n", first_even, first_even + 2, first_even + 4, first_even + 6, ara[i]);
    }
    return;
}

int main()
{
    int N;
    scanf("%d", &N);
    int ara[1000];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }

    find_consequtive_even(ara, N);

    return 0;
}


// Sample Input
// Sample Output
// 3
// 100
// 812
// 4052
// 22 24 26 28
// 200 202 204 206
// 1010 1012 1014 1016
// 2
// 452
// 508
// 110 112 114 116
// 124 126 128 130



// Question:04
// Consecutive Even Numbers
 
// The Problem Statement:
// Make a simple program that reads one variable named N which is the summation of 4 consecutive even numbers. Print the 4 consecutive even numbers whose summation is N.
// 12 + 14 + 16 + 18 = 60
 
// Input Format
// The first line contains an integer T (1 ≤ T ≤ 3).
// The Second line contains one integer number N (N<=5000). 
// Output Format
// Output will show the 4 consecutive even integer numbers separated by space in a separate line.
 
// Note: Implement it using function.
