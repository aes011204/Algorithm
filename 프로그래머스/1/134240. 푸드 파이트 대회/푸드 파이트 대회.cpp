#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    int num=0;
    for(int i = 1 ; i<food.size();i++)
    {
        if(food[i] >=2)
        {
            num = food[i]/2;
            
            for(int j = 0 ; j<num;j++)
            {
                answer+= to_string(i);
            }
        }
        
       
    }
    string str = answer;
     std::reverse(str.begin(),str.end());
     answer+="0";
     answer+= str;
    
    
    
    return answer;
}