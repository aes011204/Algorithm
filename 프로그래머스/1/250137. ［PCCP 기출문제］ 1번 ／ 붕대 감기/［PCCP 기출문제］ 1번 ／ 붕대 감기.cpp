#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    
    int second = max(bandage[0],attacks[attacks.size()-1][0]);
        
    int acc = 0;
    int attackAcc = 0;
    
        
    for(int i =1; i < second+1; i++)
    {
       
            if(attacks[attackAcc][0]==i )    
            {
                acc=0;
                answer-=attacks[attackAcc][1];
                attackAcc++;
                
                if(answer <=0)
                     return -1;
            }
            else
            {
                answer+=bandage[1];
               acc++; 
                if(acc==bandage[0])
                {
                    acc=0;
                    answer+=bandage[2];

                }
            }
        
    
            
         if(answer >= health)
            answer = health;
    }

    
    
    
    
    if(answer <=0)
        return -1;
    
    return answer;

}