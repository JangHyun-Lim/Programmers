#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int i, j;
    
    // 브루트포스 문자열 탐색 ver
    // strstr(str1, str2)로도 정답 도출 가능.
    
    int str1_len = 0;
    while (str1[str1_len] != '\0')
        str1_len++;
    
    int str2_len = 0;
    while (str2[str2_len] != '\0')
        str2_len++;
    
    for (i = 0; i <= str1_len - str2_len; i++)
    {
        for (j = 0; j < str2_len; j++)
        {
            if (str1[i + j] != str2[j])
                break;
        }
        if (j == str2_len)
            return 1;
    }
    return 2;
}