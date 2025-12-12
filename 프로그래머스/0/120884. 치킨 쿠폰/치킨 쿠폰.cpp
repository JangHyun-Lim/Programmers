#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = chicken;
    int service_chicken = 0;
    
    while (coupon >= 10)
    {
        service_chicken = service_chicken + (coupon / 10);
        coupon = (coupon / 10) + (coupon % 10);
    }
    
    answer = service_chicken;
    
    return answer;
}