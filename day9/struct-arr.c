#include <stdio.h>

struct student {
    int roll_no;
    char name[30];
    char section[2];
};
    int n = 2, i;

int main(){
    struct student s[n];

    for(i=0;i<=n;i++){
        printf("Value of student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll no: ");
        scanf("%d", &s[i].roll_no);

        printf("Section: ");
        scanf("%s", s[i].section);

    for(i=0;i<=n;i++){
    }
        printf("Value of student %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll no:%d \n", s[i].roll_no);
        printf("Section:%s \n", s[i].section);

    }

}