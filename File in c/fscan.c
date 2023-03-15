#include <stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outpurFile;

    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("No file found!");
        return 0;
    }
    outpurFile = fopen("output.txt", "w");



    int n;
    fscanf(inputFile ,"%d", &n);
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        int a;
        fscanf(inputFile ,"%d", &a);
        sum += a;
    }
    fprintf(outpurFile ,"Sum is -> %d\n", sum);

    return 0;
}