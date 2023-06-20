#include <stdio.h>

int main(){
    int in, n, fact=1;
    printf("Enter one number: ");
    scanf("%d", &in);
    for(in= in;in>=0;in--){
        fact *= in;
    }
    printf("The factorial is %d",fact);
    return 0;
}