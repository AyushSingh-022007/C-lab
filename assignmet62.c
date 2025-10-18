#include <stdio.h>
int main() {
    int a = 10;
    char c = 'A';
    int *p1 = &a;
    char *p2 = &c;
    printf("Initial addresses:\n");
    printf("p1 (int pointer): %p\n", p1);
    printf("p2 (char pointer): %p\n\n", p2);
    p1++;
    p2++;
    printf("After incrementing:\n");
    printf("p1 + 1: %p\n", p1);
    printf("p2 + 1: %p\n\n", p2);
    p1--;
    p2--;
    printf("After decrementing (back to original):\n");
    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);
    return 0;
}
