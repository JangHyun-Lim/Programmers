#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0, garo = 0, sero = 0, high = 0;
    
    garo = box[0] / n;
    sero = box[1] / n;
    high = box[2] / n;
    
    answer = garo * sero * high;
    
    return answer;
}