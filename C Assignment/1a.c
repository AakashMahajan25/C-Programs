#include<stdio.h>

int main() {
    int array[3];
    array[0]=1;
    array[1]=2;
    array[2]=3;

    for (int i=0; i<3; i++) {
        printf("%d", array[i]);
        printf("\n");
    }

}