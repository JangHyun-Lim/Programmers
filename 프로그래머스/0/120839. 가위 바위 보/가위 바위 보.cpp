#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";

    for (int i = 0; i < rsp.size(); i++)
    {
        // rsp[i]는 char 타입 !
        if (rsp[i] == '2')
            answer = answer + '0';
        else if (rsp[i] == '0')
            answer = answer + '5';
        else
            answer = answer + '2';
    }
    
    return answer;
}