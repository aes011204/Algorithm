#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;

    int painted =0;
    
    for(int i = 0; i < section.size();)
    {
        if(section.size() <= 1)
            return 1;
        
        painted = section[i]+(m-1);
        
        int j = 1;
        
        while(true)
        {
            if(section[i+j] <= painted)
            {
                
            }
            else
            {
                i+=j;
                answer++;
                break;
            }
            j++;
        }
            
    }
    return answer;
}