#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(string letter) {
    string answer = "";
    string temp = "";
    string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    for (int i = 0; i < letter.size(); i++)
    {
        if (letter[i] != ' ')
        {
            // 공백이 아닐 때까지, 모스부호 연결
            temp = temp + letter[i];
        }
        else // 공백을 만나면 = 문자로 변환
        {
            for (int j = 0; j < 26; j++)
            {
                if (temp == arr[j])
                {
                    answer = answer + char('a' + j);
                    break;
                }
            }
            temp = "";
        }
    }
    
    // 마지막 문자열 처리
    for (int j = 0; j < 26; j++)
    {
        if (temp == arr[j])
        {
            answer = answer + char('a' + j);
        }
    }
    
    return answer;
}