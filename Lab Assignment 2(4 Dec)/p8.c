#include <stdio.h>
#include <string.h>

void worn_keyboard(char ara[]);

int main()
{
    char ara[1000];
    gets(ara);

    worn_keyboard(ara);

    return 0;
}

void worn_keyboard(char ara[])
{
    printf("Recieved Input is: %s\n", ara);
    int len = strlen(ara);
    char updated_array[1000];
    int x = 1;

    for(int i = 0; i < len; i++)
    {

       if(i % 2 != 0)
       {
        while(x <= 2)
        {
            printf("%c", ara[i]);
            x++;
        }
        if(x == 3) x = 1;
       }
       else{
        printf("%c", ara[i]);
       }
    }
    return;
}

// Problem Statement:
// Your keyboard is worn out after playing games for a long time. Now when you press the keys of the keyboard, the first character you press is pressed once, then the key you press is pressed twice, then the third character will be pressed once again, and the fourth character will be pressed twice and so on. Implement it using function.

// See the sample input-output for more clarification.

// Sample Input-
// -----------------------
// abcd

// Sample Output-
// -----------------------
// abbcdd
