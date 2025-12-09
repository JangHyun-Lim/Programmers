#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int len_str1, len_str2, i, j;
    len_str1 = 0;
    len_str2 = 0;
    
    while (str1[len_str1] != '\0')
        len_str1++;
    
    while (str2[len_str2] != '\0')
        len_str2++;
    
    for (i = 0; i <= len_str1 - len_str2; i++)
    {
        for (j = 0; j < len_str2; j++)
        {
            if (str1[i+j] != str2[j])
                break;
        }
        if (j == len_str2)
            return 1;
    }
    return 2;
}