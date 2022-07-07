#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main(void){
    long long num = 123451111111111;
    int *answer;
    answer = malloc(sizeof(int)*10^11);
    int count = 0;
    while(num>0){
        answer[count++] = num%10;
        num /= 10;
    }
    printf("%d",answer[4]);
    return 0;
}