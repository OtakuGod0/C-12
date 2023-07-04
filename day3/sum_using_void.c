#include <stdio.h>

void sum(int a, int b){
    // returning the sum of the arguments 
    printf("Sum of two number is %d \n", a+b);
}
int main(){
    // vairable declaration
    int x, y;
    
    // taking input 
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // displaying output 
    sum(x, y);

    // end
    return 0;
}