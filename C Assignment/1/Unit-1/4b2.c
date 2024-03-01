#include<stdio.h>
int main() {
    unsigned char a = 0xFA;
    char loop;
    for (loop=7; loop>=0; loop--)
    printf("%d", (a&(1<<loop))?1:0);
    printf("\n");
    return 0;
}