#include <stdio.h>

int sum();
int main(){
    int n1, n2, res; 
    printf("Enter one number: ");
    scanf("%d", &n1);
    printf("Enter another number: ");
    scanf("%d", &n2);
    res = sum(n1, n2);
    printf("sum of %d and %d is %d\n", n1 ,n2 ,res);
    return 0;
}
sum(int n1,int n2){
    return n1+n2;
}