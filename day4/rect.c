#include <stdio.h>

float sphere_getSA(float);
int main(){
    float r;
    printf("Enter the radius of the football: ");
    scanf("%f", &r);

    printf("Surface area of sphere is %f\n", sphere_getSA(r));

}

float sphere_getSA(float r){
    float SA = 4 * 3.14 * r * r;

    return SA;
}