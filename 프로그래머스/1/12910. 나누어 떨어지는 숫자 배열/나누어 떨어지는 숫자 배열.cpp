#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int etc = 0;
    for(int i =0; i < arr.size(); i++)
    {
        etc = arr[i] % divisor;
        if(etc == 0)
            answer.push_back(arr[i]);
    }
    
    if(answer.size()==0)
        answer.push_back(-1);
    else 
        sort(answer.begin(),answer.end());
    
    return answer;
}