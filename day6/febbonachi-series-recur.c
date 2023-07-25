#include <stdio.h>

void series(int, int);
int main(){
    int a=0, b=1;
    series(a, b);
}

void series(int a, int b){
    printf("%d\t",b);
    if(b>100) return 0;
    else series(b, a+b);
}