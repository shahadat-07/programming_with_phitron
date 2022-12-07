#include <stdio.h>

struct Student{
    int roll;
    char name[50];
    double marks  ;
};

int main()
{
    struct Student cls[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", cls[i].name);
        scanf("%lf", &cls[i].marks);
    }

    printf("Printing new array: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", cls[i].roll);
        printf("%s\n", cls[i].name);
        printf("%lf\n", cls[i].marks);
    }

    return 0;
}