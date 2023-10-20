#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    
    
    if (slice>=n)
    {
        answer = 1;
    }
    
    else if (n>slice && n%slice == 0)
    {
        answer = n/slice;
    }
    
    else if (n>slice)
    {
        answer = n/slice+1;
    }
    
    
    return answer;
}