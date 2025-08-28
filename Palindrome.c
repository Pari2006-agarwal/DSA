#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if substring s[left...right] is palindrome
bool isPalindrome(char *s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Main function to check valid palindrome II
bool validPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            // Try skipping either left or right character
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    return true;
}

// Driver code
int main() {
    char s1[] = "aba";
    char s2[] = "abca";
    char s3[] = "abc";

    printf("%s -> %s\n", s1, validPalindrome(s1) ? "true" : "false");
    printf("%s -> %s\n", s2, validPalindrome(s2) ? "true" : "false");
    printf("%s -> %s\n", s3, validPalindrome(s3) ? "true" : "false");

    return 0;
}
