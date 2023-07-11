#include <stdio.h>

int * ret(){
    static int x[10] = {1, 3, 1};
    return x;
}
int main(){
    int *n = ret(), i;
    for(i=0;i<3;i++) printf("%d\n",  n[i]);
    return 0;
}