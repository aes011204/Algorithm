#include <string>
#include <vector>

using namespace std;

bool func (int i ,int index, int& j, vector<string>& babbling,  vector<string>& canB)
{
    int k = 0;
    if(babbling[i][j] ==canB[index][0])
    {
      for(k =0; k<canB[index].size();k++)
        {
            if(k + j >= babbling[i].size() ||babbling[i][k + j] != canB[index][k])
            {
                return false;
            }
        }
        j+=k;                    
        return true;  
    }
    return false;
}


int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> canB ={ "aya", "ye", "woo", "ma" };
    

    
    for(int i =0; i < babbling.size(); i++)
    {
        bool isAnswer = true;
        int j =0;
        while(babbling[i].size() >j)
        {
           for(int z=0; z< canB.size();z++)
           {
               isAnswer = func(i,z,j,babbling,canB);
               if(isAnswer==true)
                   break;
           }
            
            
           if(isAnswer == false)
               break;
                
        }
        if(isAnswer == true)
            answer++;
    }
    
    return answer;
}