#include <stdio.h>
#include <string.h>

int main()
{
    char ara[1000];
    gets(ara);

    int N;
    scanf("%d", &N);

    int roundInt;

    for(int i = 0; i < strlen(ara); i++)
    {
        if(ara[i] + N <= 122)
        {
            ara[i] = ara[i] + N;
        }
        else if(ara[i] + N > 122)
        {
            roundInt = (ara[i] + N) - 122;
            printf("the value of y is: %d\n", roundInt);
            ara[i] = 96 + roundInt;
        }
    }

    printf("%s", ara);
}


// Write a C program that will take a string and another number as input. Shift all the characters of the string by that numerical value. The string will consist of only small letters. Look at the explanation for more clarification.

// Sample Input:
// smiley
// 5

// Sample Output:
// xrnqjd

// Explanation:
// Here, the first character was s and it has been shifted by 5 units, that is, s+5 = x, thus we got the character ‘x’ in the output. Similarly all the character by shifting the characters by 5 units. Take a closer look at the last character. The character was ‘y’ but after shifting it by 5 units we got ‘d’. That is because we traversed the letters in a circular fashion. After ‘y’ comes ‘z’ then ‘a’ then ‘b’ then ‘c’ and then finally ‘d’. Thus, ‘y’+5 will be ‘d’ in our program. Be careful about this case.
