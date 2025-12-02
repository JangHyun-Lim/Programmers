#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double solution(int numbers[], size_t numbers_len) {
    double answer = 0;
    
    for (int i=0; i<=numbers_len-1; i++)
    {
        answer = answer + numbers[i];
    }
    
    answer = answer / numbers_len;
    
    return answer;
}