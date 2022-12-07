#include <stdio.h>
#include <string.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int even[n], odd[n], updated_array[n];
    int ceven = 0, codd = 0;

    for(int i = 1, j = 0; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            even[j] = i;
            j++;
            ceven++;
        }
    }

    for(int i = 1, j = 0; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            odd[j] = i;
            j++;
            codd++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        updated_array[i] = even[i];
    }
    for(int i = ceven, j = 0; i < n; i++, j++)
    {
        updated_array[i] = odd[j];
    }

    printf("The %dth element in this sequence is %d", k, updated_array[k-1]);

}

// You will be given two integers n and k. First you need to print all the even numbers from 1 to n serially and then followed by those even numbers print all the odd numbers in the same range. Finally, find the k-th number in the sequence that you just printed.

// Sample Input:
// 13 9

// Sample Output:
// 2 4 6 8 10 12 1 3 5 7 9 11 13
// The 9th element in this sequence is 5.

// Explanation:
// After printing the even numbers and then all the odd numbers if we look at the sequence the 9th element in the sequence is 5.
// The 1st one is 2, the 2nd one is 4 and so on.
