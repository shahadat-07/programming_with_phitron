#include <stdio.h>

int main()
{
    int T, reverse = 0, remainder;
    scanf("%d", &T);
    int ara[T];
    int ara2[T];

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(int i = 0; i < T; i++)
    {
        ara2[i] = 0;
    }

    for(int i = 0; i < T; i++)
    {
        while(ara[i] != 0)
        {
            remainder = ara[i] % 10;
            if(remainder == 1) printf("A");
            else if(remainder == 2) printf("B");
            else if(remainder == 3) printf("C");
            else if(remainder == 4) printf("D");
            else if(remainder == 5) printf("E");
            else if(remainder == 6) printf("F");
            else if(remainder == 7) printf("G");
            else if(remainder == 8) printf("H");
            else if(remainder == 9) printf("I");
            
            ara2[i] = ara2[i] * 10 + remainder;
            ara[i] /= 10;
        }
        printf("\n");
    }

    return 0;
}




// Riyad found a note written in code word which is integer numbers. Here each number [1 – 9] represent [A – I].But if the number is more than one digit it reverse itself.

// Riyad wants to make a program that automatic read the numbers and turn it into alphabets.Can you help please?

// Input Format

// First line contain T,Number of test cases.
// For every test case,the Input file contains a single integer number.
// Constraints

// 1 <= T <= 5
// 1 <= N <= 99999
// 1 <= Digit of N <= 9
// Output Format

// For each line of input output print the alphabets(must be uppercase) against the number in a separate line.
// Sample Input 0

// 5
// 12345
// 12
// 21
// 9999
// 54321
// Sample Output 0

// EDCBA
// BA
// AB
// IIII
// ABCDE
// Explanation 0

// Example: 12345 = ABCDE

// Reverse--> EDCBA

// The result is EDCBA

// Sample Input 1

// 1
// 88888
// Sample Output 1

// HHHHH