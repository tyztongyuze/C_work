#include <stdio.h>

int main() {
    int i=0, j=0;

    i ++ ;
    int w = i++;
    int y = ++i;
    printf("%d %d %d %d", i, j, w, y);
    w = 0;
    y = 0;
    w = (j++);
    y = (++j);
    printf("%d %d %d %d", i, j, w, y);
    printf("Hello, World!\n");
    return 0;
}
