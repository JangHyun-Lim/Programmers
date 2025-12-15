#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    
    for (int i = 0; i < emergency.size(); i++)
    {
        int count = 1;
        for (int j = 0; j < emergency.size(); j++)
        {
            if (emergency[i] < emergency[j])
            {
                count++;
            }
        }
        answer[i] = count;
    }
    
    return answer;
}