#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 0;
    
    // 2022년 기준 age = 25 / 1998년
    // 2022-1998 = 24
    
    answer = 2022 - age + 1;
    
    return answer;
}