#include <stdio.h>

int mult(int x, int y){
    return x*y;
}

int main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("Multiplication of %d and %d is %d \n", a, b, mult(a,b));
}
