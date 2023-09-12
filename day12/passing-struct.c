#include <stdio.h>

struct student {
    int roll;
    char name[30];
};

void structin(struct student);
int main(){
    struct student s1 = {32, "Nw"};
    structin(s1);
}

void structin(struct student s1){
    printf("%d", s1.roll);
}