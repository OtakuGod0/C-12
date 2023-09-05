
#include <stdio.h>

int mult(int, int);
int main() { 
    int i, n = 8;
    for(i =1;i<=10;i++)  
        printf("%d * %d = %d\n", n, i, mult(n, i));
}
int mult(int x, int y){
    if(y==1) return x;
    else return x + mult(x, y-1);
}