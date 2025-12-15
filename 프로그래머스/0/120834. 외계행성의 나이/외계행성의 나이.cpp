#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    
    int namuge = 0;
    
    while (age > 0)
    {
        namuge = age % 10;
        char ch = 'a' + namuge;
        answer = ch + answer;
        age = age / 10;
    }
    
    return answer;
}