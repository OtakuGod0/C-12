#include <stdio.h>
int sum(int);

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of n number is %d\n", sum(n));
}

int sum(int n){
    if(n > 0)
        return n + sum(n-1);
    else 
        return 0;
}