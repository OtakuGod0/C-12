#include <stdio.h>

struct data{
    char name[30];
    int id;
    struct employee{
        int salary;
        char position[30];
    } employee;
};


int main(){
    struct data dipson = {"dipson", 12, {10, "manager"}};

    printf("%d, %s, %s, %d", dipson.employee.salary, dipson.employee.position, dipson.name, dipson.id);
}