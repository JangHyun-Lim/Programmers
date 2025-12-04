#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    
    for (int i=0; i<sides_len; i++)
    {   
        int temp = i;
        for (int j=0; j<sides_len; j++)
        {
            if(sides[i] < sides[j])
            {
            temp = sides[i];
            sides[i] = sides[j];
            sides[j] = temp;
            }
        }
    }
    
    if (sides[sides_len - 1] < sides[sides_len - 2] + sides[sides_len - 3])
        answer = 1;
    else 
        answer = 2;
    
    
    return answer;
}