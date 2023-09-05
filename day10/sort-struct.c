#include <stdio.h>


struct data{
    char name[30];
    int roll_no;
    float gpa;
};
int main(){
    int n = 3, i, j;
    struct data s[n], tmp;
    for(i=0;i<n;i++){
        printf("\nEnter the value for %d student \n", i+1);
        
        printf("Name: ");
        scanf("%[^\n]", s[i].name);

        printf("Roll no: ");
        scanf("%d", &s[i].roll_no);

        printf("GPA: ");
        scanf("%f", &s[i].gpa);
    }

    printf("\nUnSorted: \n");
    printf("Name \t Roll NO \t GPA \n");
    printf("_________________________________\n");

    for(i=0;i<n;i++){
        printf("%s \t %d \t %f \n", s[i].name, s[i].roll_no, s[i].gpa);
        printf("_________________________________\n");

    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i].gpa > s[j].gpa){
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;           
            }
        }
    }

    printf("\nsorted: \n");
    printf("Name \t Roll NO \t GPA \n");
    printf("_________________________________\n");
    for(i=0;i<n;i++){
        printf("%s \t %d \t %f \n", s[i].name, s[i].roll_no, s[i].gpa);
        printf("_________________________________\n");
    }
}