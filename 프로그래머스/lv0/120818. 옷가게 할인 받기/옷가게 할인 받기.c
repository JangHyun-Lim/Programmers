#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    

    if (100000 <= price && price < 300000)
    {
        answer = price * 0.95;
    }
    else if (300000 <= price && price < 500000)
    {
        answer = price * 0.9;
    }
    else if (500000 <= price && price <= 1000000)
    {
        answer = price * 0.8;
    }
    else
    {
        answer = (int)price;
    }
    
    return (int)answer;
}