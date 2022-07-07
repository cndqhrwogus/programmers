#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(char *phone_number) {
    int count = 0;
    while(1){
        if(phone_number[count]!=NULL){
            count++;
        }
        else{
            break;
        }
    }
    for(int i =0;i<count-4;i++){
    phone_number[i]='*';
    }
    return phone_number;
}

int main(void){
    char phone_number1[10] = {"027778888"};
    printf("%s",solution(phone_number1));
}