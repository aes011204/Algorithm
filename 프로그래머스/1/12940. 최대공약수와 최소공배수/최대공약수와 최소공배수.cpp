#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    if(n > m)
        swap(n,m);
    else if(n == m)
    {
        answer.push_back(n);
        answer.push_back(n);
        return answer;
    }
    
    for(int i = n; i > 0; i--)
    {
        if(m%i == 0 && n%i==0)
        {
            answer.push_back(i);
            break;
        }
    }
    
    int j = 1;
    int i = 1;
    
    for(i; i <= m;)
    {
        if(n*i < m*j)
        {
            i++;
        }
        else if(n*i > m*j)
        {
             j++;
        }
        else if(n*i == m*j)
        {
            answer.push_back(m*j);
            break;
        }
            
    }
    
    return answer;
}