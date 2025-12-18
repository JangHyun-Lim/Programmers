#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int idx = 0;
    
    // 1. 몇 줄(행)을 만들지 결정합니다.
    for (int i = 0; i < (num_list.size() / n); i++)
    {
        // 2. 한 줄을 담을 빈 바구니(1차원 벡터)를 준비합니다.
        vector<int> line;
        
        // 3. n개씩 숫자를 뽑아 바구니를 채웁니다.
        for (int j = 0; j < n; j++)
        {
            line.push_back(num_list[idx]);
            idx++;
        }
        
        // 4. 완성된 한 줄을 answer(2차원 벡터)에 추가합니다.
        answer.push_back(line);
    }
    
    return answer;
}