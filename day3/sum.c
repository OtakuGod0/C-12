#include <stdio.h>

int sum(int a, int b){
    // returning the sum of the arguments 
    return a+b;
}
int main(){
    // vairable declaration
    int x, y;
    
    // taking input 
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // displaying output 
    printf("Sum of two number is %d \n", sum(x, y));

    // end
    return 0;
}