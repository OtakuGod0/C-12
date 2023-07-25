#include <stdio.h>

int main()
{
    int n, sum = 0, i ;
    printf("Enter the size of array:  ");
    scanf("%d", &n);
    
    int A[n]; 
    for(i=0;i<n;i++){
        printf("Enter the value in %d index: ", i);
        scanf("%d", &A[i]);
    }

    for(i=0;i<n;i++){
        sum += A[i];
    }

    printf("The sum of the entered values is %d", sum);
}