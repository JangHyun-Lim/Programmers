#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string temp = "";
    
    for (int i=0; i<letter.size(); i++)
    {
        if (letter[i] != ' ')
        {
            // 공백이 아니면, 공백을 만날 때까지 모스부호를 계속해서 연결.
            temp = temp + letter[i];
        }
        else // 공백이면, 하나의 문자를 완성함.
        {
            for (int j=0; j < 26; j++)
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

    for (int j=0; j<26; j++)
    {
        if (temp == arr[j])
        {
            answer = answer + char('a' + j);
            break;
        }
    }
    
    return answer;
}