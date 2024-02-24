# include <stdio.h>

int main () {

    char digit;

    printf("Enter the Digit : ");
    scanf("%c", &digit);

    if (digit>='0' && digit<='9') {
        printf("You entered a Digit");
    } else {
        printf("The Number entered is not a Digit");
    }

    return 0;

}