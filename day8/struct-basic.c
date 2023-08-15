#include <stdio.h>

struct student{
    int roll;
    char name[20];
    float per;
};

int main(){
    struct student s[5], tmp;
    int i, j;
    for(i=0;i<5;i++){
        printf("Enter Roll no, Name, Percentage of student: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].per);
    }

    printf("Rollno\t Name \t Percentage\n");
    for(i=0;i<5;i++)   printf("%d\t%s\t%f\t\n", s[i].roll, s[i].name, s[i].per);

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(s[j].roll > s[i].roll){
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    printf("\nSorted: \n");
    printf("Rollno\t Name \t Percentage\n");
    for(i=0;i<5;i++)   printf("%d\t%s\t%f\t\n", s[i].roll, s[i].name, s[i].per);
}
          