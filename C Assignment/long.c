#include<stdio.h>
#include<string.h>

int main() {
    char str[20] = "ABCDEFGHIK";
    strcat(str, "XYZ");
    printf("%s", str);
}