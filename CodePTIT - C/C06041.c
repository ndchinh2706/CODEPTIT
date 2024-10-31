#include <stdio.h>
#include <string.h>

int main() {
    char S[100001];
    scanf("%s", S);

    int len = strlen(S);
    char l[100001];
    int pos = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (S[i] >= l[pos]) {
            l[++pos] = S[i];
        }
    }
    for (int i = pos; i > 0; i--) {
        putchar(l[i]);
    }

    return 0;
}
