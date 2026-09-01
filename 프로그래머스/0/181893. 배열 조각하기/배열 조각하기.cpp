#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;
    
    for(int i =0; i < query.size(); i++ )
    {
        bool odd = i%2;
        
        int index = query[i];
        
        if(odd)
        {
            if(index > 0)
            answer.erase(answer.begin(), answer.begin()+index);
        }
        else
        {
             if(index < arr.size())
            answer.erase(answer.begin()+index+1, answer.end());

        }

    }
    
    
    return answer;
}