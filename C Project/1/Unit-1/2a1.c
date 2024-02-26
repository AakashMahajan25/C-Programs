#include<stdio.h>
int main() {
    int p,q,r;
    p=8>5>2;
    q=8>5>0;
    r=8>5>1;
    printf("%d %d %d", p, q, r);
    return 0;
}