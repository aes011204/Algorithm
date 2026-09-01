#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    bool contin = true;
    
    while(contin)
    {
        if(wallet[0]>=bill[0] && wallet[1]>=bill[1] )
            break;
        
        if(wallet[1]>=bill[0] && wallet[0]>=bill[1] )
            break;
        
        if(bill[0] > bill[1])
        {
            bill[0]*=.5f;
        }
        else
        {
            bill[1]*=.5f;
        }
            
        
        answer++;
    }
    
    return answer;
}