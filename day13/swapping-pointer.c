#include <stdio.h>

void swap(int*, int*);
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    //swapping
    swap(&a, &b);
    printf("Swapped value is: \n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}