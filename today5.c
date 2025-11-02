#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int last_index[256];
    for (int i = 0; i < 256; i++)
        last_index[i] = -1;

    int start = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        if (last_index[s[i]] >= start)
            start = last_index[s[i]] + 1;
        last_index[s[i]] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d\n", maxLen);
    return 0;
}