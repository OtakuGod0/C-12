#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[30];
};

struct student createStudent(int roll, char name[30]){
    struct student p;
    p.roll = roll;
    strcpy(p.name, name);
    return p;
}
int main(){
    struct student s2 = createStudent(32, "Dipson");
    printf("%d", s2.roll);
}

