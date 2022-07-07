#include <stdio.h>
#include <stdlib.h>
//짝수와 홀 수
int main(void){
    int num = 3;
    char *answer;
    if(num%2==0){
    answer = malloc(sizeof(char)*3);
    answer = "Even";
    }
    else{
    answer = malloc(sizeof(char)*4);
    answer = "Odd";
    }
    printf("%s",answer);
}