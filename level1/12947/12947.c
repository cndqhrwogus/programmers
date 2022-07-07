#include <stdio.h>
#include <stdbool.h>
//하샤드 수
int main(void){
    int x = 4432;
    int result = 0;
    int value = 10000;
    int test = x;
    bool answer = true;
    while(1){
        if(value==0){
            break;
        }
        else{
            result = result + (test / value);
            test = test%value;
            value = value/10;
        }
    }
    if(x%result==0){
        answer = true;
    }
    else{
        answer = false;
    }
    printf("%d",answer);
}