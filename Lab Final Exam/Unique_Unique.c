#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int main()
 { 
    int N;
    scanf("%d ", &N);
    char S[N];
    gets(S);
    // fgets(S, N, stdin);
    int i, j, count = 0, non = 0;
    int n = strlen(S);
    for(i = 0; i < n; i++)
    {
        int flag = 0;
        for(j = 0; j < i; j++)
        {
            if(S[i] == S[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
        } 

        if(flag == 1)
        {
            non++;
        } 

    }
    printf("%d\n", count);
    printf("%d\n", non);

    return 0;
 }


//  10
// acckyppomp
// 5    a + k + y + o + m