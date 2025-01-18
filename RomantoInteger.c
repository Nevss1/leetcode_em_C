#include <stdio.h>

// s = "LVIII"
//  L = 50, V= 5, III = 3

int romanToInt(char* s) {
    int sum = 0;
    int i = 0;
    char current, next;


    while (s[i] != '\0') {
        current = s[i];
        next = s[i+1];

        switch (current)
        {
            case 'I': 
                if (next == 'V' || next == 'X') sum -= 1;
                else sum += 1;
            break;
            case 'V': sum += 5; break;
            case 'X': 
                if (next == 'L' || next == 'C') sum -= 10;
                else sum += 10;
            break;
            case 'L': sum += 50; break;
            case 'C':
                if (next == 'D' || next == 'M') sum -= 100;
                else sum += 100;
            break;
            case 'D': sum += 500; break;
            case 'M': sum += 1000; break;
            default: break;
        }
        i++;
    }
   printf("%d", sum);
}

int main() {
    char* roman1 = "MCMXCIV";
    romanToInt(roman1);

}