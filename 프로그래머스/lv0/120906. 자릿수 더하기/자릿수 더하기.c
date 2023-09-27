#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int res = 0;
    int sum = 0;
    
    while (n>0)
    {
        res = n%10;
        answer = answer+res;
        n = n/10;
    }
    
    return answer;
}