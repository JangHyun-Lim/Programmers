#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int> temp;
    
    for (int i=0; i < my_string.size(); i++)
    {
        switch(my_string[i])
        {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                temp.push_back(my_string[i] - '0');
                break;
        }
    }
    
    for (int j=0; j < temp.size(); j++)
        answer = answer + temp[j];
    
    return answer;
}