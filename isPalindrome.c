#include <stdio.h>
#include <stdbool.h>

// -121
// 0 * 10 + 1
// 1 * 10 + 2

bool isPalindrome(int x) {
    if (x < 0) return false;
    int reverse = 0;
    int lastdigit;
    int copy = x;

    while (copy)
    {
        lastdigit = copy % 10;
        copy /= 10;
        reverse = reverse * 10 + lastdigit;
    }
    printf("%d", reverse);
    if (reverse == x) {
        return true;
    } else return false;
}


int main() {
    isPalindrome(123);
}