#include <stdio.h>
#include<ctype.h>

int isVowel (char c) {
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    else
        return 0;
}

int main() {

    char c;

    while (scanf("%c", &c) == 1) {
        if (isVowel(tolower(c)))
            printf("%ch%c", c, tolower(c));
        else
            printf("%c", c);
    }

    return 0;
}