#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    if (n % 2 == 1)
    {
        for(int i=1; i<=n; i += 2)
        {
            answer = answer + i;
        }
    }
    else
    {
        for(int j=2; j<=n; j += 2)
        {
            answer = answer + j*j;
        }
    }
    
    return answer;
}