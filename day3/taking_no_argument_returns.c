#include <stdio.h>

int true(){
    return 1;
}

int main(){
    if(true()){
        printf("Heloooo world!!!\n");
        
    }
    float a = 0.1 , b = 0.3;
    float x = a+b;
    printf("%.30f\n", x);
    return 0;
}