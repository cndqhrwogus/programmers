#include <stdio.h>

//자릿수 더하기

int main(void){
    long num = 987;
    int answer = 0;
    while(num>0){
        answer += num%10;
        num /= 10;
    }
    printf("%d",answer);
    
}