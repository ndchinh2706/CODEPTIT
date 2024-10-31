#include <stdio.h>
#include <string.h>

int check(char *num) {
    int N = strlen(num);
    char exnum[2 * N + 1];
    strcpy(exnum, num);
    strcat(exnum, num);
    
    for (int i = 1; i <= N; i++) {
        char m[61] = {0};
        int c = 0, len = N;
        
        for (int j = N - 1; j >= 0; j--) {
            int p = (num[j] - '0') * i + c;
            m[j] = (p % 10) + '0';
            c = p / 10;
        }
        
        if (c > 0) {
            for (int k = len; k > 0; k--)
                m[k] = m[k - 1];
            m[0] = c + '0';
            len++;
        }
        
        m[len] = '\0';
        
        if (len != N || strstr(exnum, m) == NULL)
            return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        char num[61];
        scanf("%s", num);
        
        if (check(num))
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
