#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(char *s) {
    int l = 0;
    int r = strlen(s) - 1;

    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

char* firstPalindrome(char words[][101], int n) {
    for (int i = 0; i < n; i++) {
        if (isPalindrome(words[i])) {
            return words[i];
        }
    }
    return "";
}

int main() {
    char words1[][101] = {"abc", "car", "ada", "racecar", "cool"};
    printf("%s\n", firstPalindrome(words1, 5));
    
    char words2[][101] = {"notapalindrome", "racecar"};
    printf("%s\n", firstPalindrome(words2, 2));
    
    char words3[][101] = {"def", "ghi"};
    printf("%s\n", firstPalindrome(words3, 2));

    return 0;
}
