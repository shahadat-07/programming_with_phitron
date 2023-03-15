#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];
    gets(S);
    int length = strlen(S);
    for(int i = 0; i <= length; i++)
    {
        for(int j = 0; j <= length - 1; j++)
        {
            if(S[j] > S[j + 1])
            {
                char temp = S[j];
                S[j] = S[j+1];
                S[j + 1] = temp;
            }
        }
    }

   for(int i = 0; i <= length; i++)
   {
        printf("%c", S[i]);
   }


    return 0;
}