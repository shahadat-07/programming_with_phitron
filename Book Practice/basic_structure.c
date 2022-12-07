#include <stdio.h>
#include <string.h>

struct nametype {
    char first_name[20];
    char last_name[20];
};

struct student {
    int id;
    struct nametype name;
};

int main()
{   
    struct student one;

    scanf("%d", &one.id);
    scanf("%s", one.name.first_name);
    scanf("%s", one.name.last_name);

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first_name, one.name.last_name);

    return 0;
}