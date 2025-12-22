#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int temp = 0;
    
    if (direction == "right")
    {   
        temp = numbers[numbers.size() - 1];
        for (int i = numbers.size() - 2; i >= 0; i--)
        {
            numbers[i+1] = numbers[i];
        }
        numbers[0] = temp;
    }
    else // left
    {
        temp = numbers[0];
        for (int i = 0; i <= numbers.size() - 2; i++)
        {
            numbers[i] = numbers[i + 1];
        }
        numbers[numbers.size() - 1] = temp;
    }
    
    for(int j = 0; j < numbers.size(); j++)
        answer.push_back(numbers[j]);
    
    return answer;
}