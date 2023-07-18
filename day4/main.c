#include <stdio.h>

int *arr(){
    static int x[10] = {1, 3, 1};
    return x;
}
int main(){
    int *n = arr(), i;
    for(i=0;i<3;i++) printf("%d\n",  n[i]);
    return 0;
}