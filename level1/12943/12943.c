#include <stdio.h>
//콜라츠 추측
int main(void){
    long int num = 626331;
    int answer = 0;
    while(num != 1){
        if(answer >500){
            answer = -1;
            break;
        }
        else if(num%2==0){
            num = num / 2;
            answer ++;
        }
        else if(num%2!=0){
            num = (num * 3) + 1;
            answer ++;
        }
    }
    printf("%d",answer);
}