#include <string>
#include <vector>

using namespace std;

__int128 solution(int balls, int share) {
    __int128 answer = 0;
    __int128 num1 = 1, num2 = 1, num3 = 1;
    
    // n!을 구하는 과정
    for (int i = 1; i <= balls; i++)
        num1 = num1 * i;
    
    // (n-m)!을 구하는 과정
    for (int j = 1; j <= (balls - share); j++)
        num2 = num2 * j;
    
    // m!을 구하는 과정
    for (int k = 1; k <= share; k++)
        num3 = num3 * k;
    
    answer = num1 / (num2 * num3);
    
    return answer;
}