#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int temp   = 1;
    int answer = 0;
    
    for (int i=1; i<=n; i++)
    {
        temp = temp * i;
        if (temp <= n)
            answer++;
        else
            break;
    }
    
    return answer;
}