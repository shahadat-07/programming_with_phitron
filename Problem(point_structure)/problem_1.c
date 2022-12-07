// Calculating Manhattan distance => |x1 - x2| + |y1 - y2| 
#include <stdio.h>
#include <stdlib.h>

struct Point{
    int x;
    int y;
};

int manhattan (struct Point p1, struct Point p2)
{
    int res = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return res;
}

int main()
{
    struct Point p1;
    struct Point p2;

    scanf("(%d, %d)\n", &p1.x, &p1.y);
    scanf("(%d, %d)", &p2.x, &p2.y);

    int ans = manhattan(p1, p2);

    printf("The answer is: %d\n", ans);

    return 0;
}