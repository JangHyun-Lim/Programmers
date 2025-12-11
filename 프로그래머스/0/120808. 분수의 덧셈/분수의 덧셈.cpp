#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer(2);
    
    // 통분
    int bunja = (numer1 * denom2) + (numer2 * denom1);
    int bunmo = denom1 * denom2;
    
    // 분자, 분모 크기 비교
    int temp = 0;
    if (bunja > bunmo)
        temp = bunmo;
    else
        temp = bunja; 
    
    // 기약분수로 나누기 (최대 공약수를 찾음)
    for (int i = temp; i >= 2; i--)
    {
        if (bunja % i == 0 && bunmo % i == 0)
        {
            bunja = bunja / i;
            bunmo = bunmo / i;
            break; // 최대 공약수를 찾았으면, 바로 break
        }
    }
    
    answer[0] = bunja;
    answer[1] = bunmo;
    
    return answer;
}