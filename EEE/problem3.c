#include <stdio.h>
#include <string.h>

int vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

char* happy(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n-2; i++) {
        if (vowel(s[i]) && vowel(s[i+1]) && vowel(s[i+2])) {
            return "HAPPY";
        }
    }
    return "SAD";
}

int main() {
    int t,i;
    scanf("%d", &t);
    char s[101];
    while (t--) {
        scanf("%s", s); 
        printf("%s\n", happy(s));
    }
    return 0;
}

