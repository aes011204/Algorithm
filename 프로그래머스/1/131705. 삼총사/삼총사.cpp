#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    int a=0; 
    int b=0; 
    int c=0; 
    
    for(int i =0; i < number.size()-2; i++)
    {
        a = number[i];
        
        for(int j = i+1 ; j < number.size()-1; j++)
        {
            b = number[j];
            
            for(int k= j+1; k < number.size();k++)
            {
                c = number[k];
                
                if(a+b+c==0)
                    answer++;
            }
        }
    }
    
    
    return answer;
}