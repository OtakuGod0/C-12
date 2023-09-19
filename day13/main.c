#include <stdio.h>

int main(){
    int A[] = {1, 2, 3, 4, 5}, i;
    int *x = A;
    for(i=0;i<5;i++){
        printf("%d\n", *x);
        x++;
    }
}   