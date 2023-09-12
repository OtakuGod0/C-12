#include <stdio.h>

int main(){
    int A[] = {1, 2, 3};
    int *a  = &A[0];
    printf("%p", a);
}