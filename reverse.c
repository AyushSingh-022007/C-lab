#include <stdio.h>
#include <string.h>
void REVERSE(char str[]) {
    int i, j;
    char temp;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
