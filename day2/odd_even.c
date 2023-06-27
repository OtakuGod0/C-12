#include <stdio.h>

void odd_even(int x){
    if(x%2==0){
        printf("%d is even number\n", x);
    }
    else{
        printf("%d is odd number\n", x);
    }
}
int main(){
    int x;
    printf("Enter one number: ");
    scanf("%d", &x);
    odd_even(x);
    return 0;
}
