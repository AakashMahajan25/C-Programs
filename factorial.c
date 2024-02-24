#include <stdio.h>

int main() {
    
    int n, factorial=1;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i=1; i<n+1; i++) {
        factorial*=i;
    }

    printf("Factorial of the given number n is %d", factorial);

}