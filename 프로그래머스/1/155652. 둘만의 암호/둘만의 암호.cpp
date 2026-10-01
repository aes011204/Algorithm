#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> setChar;
  
    for(int i =0; i < skip.size();i++)
    {
        setChar.insert(skip[i]);
    }
    
    for(int i =0; i < s.size(); i++)
    {
        int n =0; 
        
        for(int j = 1; j <= index+n; j++)
        {
            char candidate = 'a' + (s[i] - 'a' + j) % 26;
            
            if(setChar.find(candidate)!= setChar.end())
            {
                n++;
            }
        }
        
        s[i] = 'a' + (s[i] - 'a' + index + n) % 26;
    }

    
    
    return s;
}