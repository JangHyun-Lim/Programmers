#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    int max = numbers[0] * numbers[1];
    
    for (int i=0; i < numbers_len; i++)
    {
        for (int j=0; j < numbers_len; j++)
        {
            if (max < numbers[i] * numbers[j] && i != j)
                max = numbers[i] * numbers[j];
        }
    }
    
    return max;
}