#include <stdio.h>

int sum(int *, int *);
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("sum is %d\n", sum(&a, &b));
}
int sum(int *x, int *y){
    return *x + *y;
}