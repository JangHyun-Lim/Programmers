#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* my_string) {

    char* answer = (char*)malloc(1000);
    int len = strlen(my_string);
    
    for(int i=0; i<=1000; i++)
    {
        answer[i] = my_string[len-(i+1)];
    }
    
    return answer;
}