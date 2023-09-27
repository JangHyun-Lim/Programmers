#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int dot[], size_t dot_len) {
    int answer = 0;
    
    
    if (dot[0]>0 && dot[1]>0) answer = 1;
    if (dot[0]>0 && dot[1]<0) answer = 4;
    if (dot[0]<0 && dot[1]>0) answer = 2;
    if (dot[0]<0 && dot[1]<0) answer = 3;
    
    
    
    return answer;
}