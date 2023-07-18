#include <stdio.h>

void arrpass(int []);

int main(){
    int x[5] = {1, 3, 4, 12, 2};
    arrpass(x);
}
void arrpass(int x[5]){
    int i;
    for(i=0;i<5;i++){
        printf("%d\n", x[i]);
    }
}