#include <stdio.h>
#include <string.h>

int main(){
    char in[100], re[100] = ""; 
    printf("Enter one string: ");
    scanf("%s", in);
    strcpy(re, in);
    strrev(re);
    if(strcmp(in, re) == 0){
        printf("The given string palindrome");
    }
    return 0;
}