#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer = players;
    unordered_map<string,int> mapPlayers;
    for(int i =0; i < answer.size(); i++)
    {
           mapPlayers.insert({answer[i],i});
    
    }
    for(int i = 0; i < callings.size(); i++)
    {
        auto it = mapPlayers.find(callings[i]);
        int index = it->second;
        auto previt = mapPlayers.find(answer[index-1]);
        swap(answer[index-1],answer[index]); 
        
        it->second-=1;
        previt->second+=1;
        
    }
    
    
    return answer;
}