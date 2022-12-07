#include<stdio.h>
int main()
{
    int mat[3][3], i, j, matTrans[3][3];
    printf("Enter 3 by 3 Matrix Elements: ");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat[i][j]);
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matTrans[j][i] = mat[i][j];
    }

    printf("\nTranspose of given Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", matTrans[i][j]);
        printf("\n");
    }

    return 0;
}

// Write a C program that will take a 3x3 matrix as input and then print the transpose of that matrix. For hints see this.