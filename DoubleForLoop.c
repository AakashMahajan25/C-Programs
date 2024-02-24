# include <stdio.h>

// Just random code no logic to practice double for loop

int main() {
    int n, sum;
    printf("Enter Value of n : ");
    scanf("%d", &n);

    for (int i=1, j=n; i<=n && j>=1; i++, j--) {
        sum = sum + i;
        printf("%d ", j);    
    }

    printf("Sum is %d\n", sum);

    return 0;
}