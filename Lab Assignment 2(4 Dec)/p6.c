#include <stdio.h>

int is_divisible_by_three(int ara[], int n);

int is_divisible_by_five(int ara[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int ara[1000];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int countOfThree = is_divisible_by_three(ara, n);
    int countOfFive = is_divisible_by_five(ara, n);

    int sum = (countOfThree + countOfFive);

   if(sum > 0)
   {
     printf("%d\n", sum);
   }
   else 
    printf("-1\n");

    return 0;
}

int is_divisible_by_three(int ara[], int n)
{
    int three_counter = 0;
    for(int i = 0; i < n; i++)
    {
        if(ara[i] % 3 == 0)
        {
            three_counter++;
            if(ara[i] % 5 == 0){
                ara[i] = 98;
            }
        }
    }
   
    return three_counter;
}

int is_divisible_by_five(int ara[], int n)
{   
    int five_counter = 0;
    for(int i = 0; i < n; i++)
    {
        if(ara[i] % 5 == 0)
        {
            five_counter++;
        }
    }
   
    return five_counter;
}



























// Problem Statement
// You are given an array of size n . And the next line will contain n positive integers. Now you need to tell how many numbers are divisible by 3 and divisible by 5. For this you need to write two functions , First one is for finding whether a number is divisible by 3 or not and the second one is for finding whether a number is divisible by 5 or not. See the sample input/output and explanation for more clarification.

// Print the total count of how many numbers are divisible by 3 and divisible by 5 if there are no such numbers then return -1 from the functions,and that time print -1 only once(see the sample input and output)

// Note - if a number is divisible by both 3 and 5,then consider it only once.

// Constraints- 
// 1<=n<=100
// Values of array will be given between 1-1000
 
// Sample Input 1- 						Sample Output 1- 
// 5										3
// 10 1 13 3 9 							Sample Output 2- 
// Sample Input 2- 							5
// 7
// 13 9 9 25 6 17 30
// Sample Input 3- 							Sample Output 3- 
// 2 
// 2 11										 -1

// Explanation - 
// In sample input 1 - 
// 10 is divisible by 5
// 3 and 9 is divisible by 3
// Total count = 3

// In sample input 2 -
// 9 is divisible by 3 , there are two 9 exist
// 6 is divisible by 3
// 25 is divisible by 5
// 30 is divisible by both 3 and 5 , so you must consider it only once. 
// Total count  = 5
