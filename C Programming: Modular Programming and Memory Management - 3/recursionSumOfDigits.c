#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; 
    }
    return (n % 10) + sumOfDigits(n / 10);
    // 47253 % 10 = 3 + sumOfDigits(4725)
    // 4725 % 10 = 3 + 5 + sumOfDigits(472)
    // 472 % 10 = 3 + 5 + 2 + sumOfDigits(47)
    // 47 % 10 = 3 + 5 + 2 + 7 + sumOfDigits(4)
    // 4 % 10 = 3 + 5 + 2 + 7 + 4   
}

int main(void) {
    int number;
    
    scanf("%d", &number);
    
    printf("%d\n", sumOfDigits(number));
    
    return 0;
}
