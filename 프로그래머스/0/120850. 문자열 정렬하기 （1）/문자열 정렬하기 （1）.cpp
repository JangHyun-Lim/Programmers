#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    vector<int> arr;
    
    for (int i = 0; i < my_string.size(); i++)
    {
        switch(my_string[i])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                arr.push_back(my_string[i] - '0'); // 문자 - 문자 = 숫자
                break;
        }
    }
    
    for (int j = 0; j < arr.size() - 1; j++)
    {
        for (int z = j+1; z < arr.size(); z++)
        {   
            if(arr[j] > arr[z])
            {
            int temp = 0;
            temp = arr[j];
            arr[j] = arr[z];
            arr[z] = temp;   
            }
        }
    }
    
    answer = arr;
    
    return answer;
}