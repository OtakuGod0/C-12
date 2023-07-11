#include <stdio.h>

//function declaration
int div_count(int);

int main(){
    //vairable declaration
    int x; 

    //taking input
    printf("Enter one number: ");
    scanf("%d", &x);

    //prime check
    if(div_count(x) == 2){
        printf("The number %d is prime number.\n", x);
    }
    else{
        printf("The give number %d is composite number.\n", x);
    }

    //termination
    return 0;
}                        

//function defination
//takes n as input and returns the number of numbers that can divide n
int div_count(int n){
    //local vairable declaration
    int i, count = 0;

    //looping to check the number of divisible numbers
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        else {
            continue;
        }
    }

    //returning count
    return count;
}