#include <stdio.h>
//정수 제곱근 판별

int main(void){
    long long num = 121;
    long long count = 1;
    long long answer = 0;
    while(1){
        if(count*count==num){
            answer = (count+1)*(count+1);
            break;
        }
        else if(count*count>num){
            answer = -1;
            break;
        }
        else if(count*count<num){
            count++;
        }
        printf("%lld",answer);
    }
    printf("%lld",answer);
}