#include <stdio.h>

struct student{
    int roll;
    char fname[20];
    char lname[20];
};

int main(){
    struct student s;
    printf("Enter Roll no, first Name, last name of student: ");
    scanf("%d %s %f", &s.roll, s.fname, s.lname);
    printf("Rollno\t firstName \t lastname\n");
    printf("%d\t%s\t%f\t\n", s.roll, s.fname, s.lname);

}
          