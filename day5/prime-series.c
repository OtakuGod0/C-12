#include <stdio.h>

//function declaration
int pcheck(int);
int main()
{
    //vairable declaration
    int n, i, j=0;

    //taking input
    printf("Enter one number: ");
    scanf("%d", &n);

    //looping through n to 1 
    for(i=2;j<=n;i++){
        //checking if i is prime and if true printing i
        if(pcheck(i)){
            printf("%d\n", i);
            j++;
        }
    }

    //termination
    return 0;
}

//function defination
//function that returns 1 if prime 0 if composite
int pcheck(int x){
    //local vairable declaration
    int n, d=0;

    //looping through n to 1 and if any deviser counter d is incremented
    for(n=x;n>=1;n--){
        if(x%n==0){
            d++;
        }
    }

    //checking if number of deviser from n to 1 is greater then 2 if yes returns 0 if not returns 1
    if(d>2) return 0;
    else return 1;

}