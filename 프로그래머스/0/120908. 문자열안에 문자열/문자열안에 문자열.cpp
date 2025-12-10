#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int i, j;
    int str1_len = str1.size();
    int str2_len = str2.size();
    
    for (i = 0; i <= str1_len - str2_len; i++)
    {
        for (j = 0; j < str2_len; j++)
        {
            if (str1[i+j] != str2[j])
                break;
        }
        if (j == str2_len)
            answer = 1;
    }
    
    if (answer != 1)
        answer = 2;
    
    return answer;
}