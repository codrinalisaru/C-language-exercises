#include <stdio.h>
int mul(int x, int y);

int main() {
    int a, b, c;
    a = 5;
    b = 10;
    c = mul(a, b);
    printf("multiplication of %d and %d is %d", a, b, c);
    return 0;
}

int mul(int x, int y){
    int p;
    p = x*y;
    return p;
}
