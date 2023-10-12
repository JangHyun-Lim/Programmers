#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    if (n%2 == 0)
    {
        for (int i=2; i<=n; i=i+2)
        {
            answer = i*i + answer;
        }
    }
    
    else
        for (int j=1; j<=n; j=j+2)
        {
            answer = answer+j;
        }
    
    return answer;
}