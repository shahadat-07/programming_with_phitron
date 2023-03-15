#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++)
    {
        int N, S;
        scanf("%d", &N);
        int ara[N];
        for(int j = 1; j <= N; j++)
        {
            scanf("%d", &ara[j]);
        }
        scanf("%d", &S);


        int flag = 0;
        for(int k = 1; k <= N; k++)
        {
            if(ara[k] == S)
            {
                flag = k;
                break;
            }
        }

        if(flag == 0) printf("Case %d: Not Found\n", i);
        else printf("Case %d: %d\n", i, flag);
    }
    
    return 0;
}


// Problem Statement
// You are given a list of numbers. Now find the position of a specific number from the list; if the number is not found in the given list then you have to print Not Found.

// Input Format

// Input starts with an integer T, denoting the number of test cases.
// Next line contains N, size of the list.
// Next line contains N, values of the list.
// Last integer contains S, the number that you need to find.

// Note: Find the first occurence of that number from left.

// 1 <= T <=20
// 1 <= N <=1000
// 1 <= S <=1000

// Note: Don't forget to print a new line;

// Sample Input 0

// 3
// 5
// 8 5 2 10 9 
// 10
// 3
// 50 20 60 
// 20
// 4 
// 1 2 2 4 
// 5
// Sample Output 0

// Case 1: 4
// Case 2: 2
// Case 3: Not Found
// Sample Input 1

// 2
// 8
// 935 992 900 960 988 952 996 998 
// 917
// 7
// 932 953 970 979 925 907 958 
// 933
// Sample Output 1

// Case 1: Not Found
// Case 2: Not Found
// Sample Input 2

// 1
// 5
// 1 2 4 2 5
// 2
// Sample Output 2

// Case 1: 2