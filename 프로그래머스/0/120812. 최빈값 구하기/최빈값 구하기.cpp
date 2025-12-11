#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int maxCount = 0;
    int temp     = 0;
    bool Multi   = false;
    
    for (int i = 0; i < array.size(); i++)
    {   
        int count = 0;
        for (int j = 0; j < array.size(); j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        
        if (count > maxCount)
        {
            maxCount = count;
            temp     = array[i];
            Multi    = false;
        }
        else if (count == maxCount && temp != array[i])
            Multi = true;
    }
    
    if (Multi == false)
        answer = temp;
    else
        answer = -1;
    
    return answer;
}