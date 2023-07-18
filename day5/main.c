#include <stdio.h>

int n;
int *sort(int []);

int main(){
    int i;
    printf("Enter the size of arr: ");
    scanf("%d", &n);
    int x[n];
    for(i=0;i<n;i++){
        printf("Enter the value for %d position: ", i);
        scanf("%d", &x[i]);
    }
    int *sorted_arr = sort(x[n]);

    for(i=0;i<n;i++){
        printf("%d\n", sorted_arr[i]);
    }

}

int *sort(int x[n]){
    int i, j, tmp;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(x[i]>x[j]){
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
    return x;
}