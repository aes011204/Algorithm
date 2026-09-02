#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    int index = 0; 
    int count = 1; 
    
 for(int i = 1; i <= rank.size(); i++)
 {
     auto it = find(rank.begin(),rank.end(),i);
     index = it-rank.begin();
     
     if(attendance[index]==true&&count==1)
     {
        answer += index*10000;
         count++;
     }
     else if(attendance[index]==true&&count==2)
    {
        answer += index*100;
         count++;
     }  
    else if(attendance[index]==true&&count==3)
    {
        answer += index;
        break;
     }  

 }
    
    
    return answer;
}