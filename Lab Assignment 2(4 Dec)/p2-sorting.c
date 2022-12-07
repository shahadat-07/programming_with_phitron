// You have given a string. Now your task is to sort this string in descending order. Implement this using function.

// Sample Input 1
// abddccss

// Sample Output 1
// ssddccba

#include <stdio.h>
#include <string.h>

void sorting(char str[])
{

    int length = strlen(str);
    printf("%d\n", length);

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length - 1; j++)
        {
            if(str[j] < str[j+1])
            {
                int temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("%s\n", str);
    return;

}

int main()
{
    char str[1000];
    gets(str);
    sorting(str);

    return 0;
}
