#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // If num is divisible by any number between 2 and sqrt(num), it's not prime
    }
    return 1; // If no divisor was found, it's a prime number
}

int main() {
    printf("Prime numbers between 1 and 20 are:\n");

    for (int i = 1; i <= 20; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
