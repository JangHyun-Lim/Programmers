#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int index  = 0;
    
    for (int i = 0; i < k-1; i++) // 공을 던지는 횟수
        index = (index + 2) % numbers.size(); // 다음에 공을 던질 사람의 위치(index)
    
    answer = numbers[index];
        
    return answer;
}