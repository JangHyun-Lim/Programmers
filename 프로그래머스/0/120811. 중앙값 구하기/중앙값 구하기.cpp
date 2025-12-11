#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int n = array.size();
    
    // 오름차순 정렬
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n-1-i; j++)
        {
            int temp = 0;
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    // 중앙값 찾기
    answer = array[n / 2];
    
    return answer;
}