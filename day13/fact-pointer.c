#include <stdio.h>

int fact(int *);
int main(){
    int a;
    printf("Enter one number: ");
    scanf("%d", &a);
    printf("Factorial is %d\n", fact(&a));

}
int fact(int *x){
    int i, fact =1;
    for(i=1;i<=*x;i++){
        fact *= i;
    }
    return fact;
}