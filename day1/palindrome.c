#include <stdio.h>
#include <string.h>

int main(){
    char in[100], re[100]; 
    printf("Enter one string: ");
    gets(in);
    re = strrev(in);
    if(in == re){
        printf("The given string palindrome");
    }
    return 0;
}