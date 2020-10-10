// Stammering (or stuttering) is a speech disorder when syllables (usually the first one in the words) are unintentionally repeated.
// Look at the following ahartihifihicihiahal stahammehereher cohodehe (artificial stammerer code)

// Write a function to distinguish vowels from other letters (the function receives a character, and returns whether it is a vovel or not).
// Modify the program above to use this function in main().

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