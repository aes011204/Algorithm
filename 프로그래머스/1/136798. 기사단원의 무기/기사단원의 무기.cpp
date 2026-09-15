#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i =1; i <= number; i++)
    {
        int n = 0;
        for(int j =1; j <= i/j; j++)
        {
            if(i%j==0)
            {
                if(i/j == j)
                    n++;
                else
                    n+=2;
            }
        }
        if(n>limit)
        {
            answer+=power;
        }
        else
        {
            answer+=n;
        }
    }
    
    
    return answer;
}