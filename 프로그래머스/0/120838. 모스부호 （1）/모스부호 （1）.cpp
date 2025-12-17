#include <string>
#include <vector>
#include <sstream>

using namespace std;

string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter) {
    string answer = "";
    string temp = "";
    stringstream ss;
    
    ss << letter;
    while (ss >> temp)
    {
        for (int i = 0; i < 26; i++)
        {
            if (temp == morse[i])
            {
                answer = answer + char('a' + i);
                break;
            }
        }
    }
    
    return answer;
}