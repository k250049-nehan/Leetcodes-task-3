#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
void reverseVowels(char *s) {
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        if (!isVowel(s[i])) {
            i++;
        } else if (!isVowel(s[j])) {
            j--;
        } else {
            // swap vowels
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    char s1[] = "IceCreAm";
    reverseVowels(s1);
    printf("%s\n", s1);

    char s2[] = "leetcode";
    reverseVowels(s2);
    printf("%s\n", s2);

    return 0;
}
