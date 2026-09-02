#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    
     int a=0;
     int b=0;
    
    
//     while(true)
//     {
//         if(d < sqrt(pow(a*k,2)+pow(b*k,2)))
//            {
//                 b++;
//                 a=0;
//                if(d < sqrt(pow(a*k,2)+pow(b*k,2)))
//                   break;
//            }
//         else
//            {
//                 a++;
//                answer++;
//            }
        
           
//     }
int maxA = 0.f;
    
    while(true)
    {
        if(b > d/k)
            break;
        
        maxA = sqrt(pow(d,2)-pow(b*k,2))/k;
        
        b++;
        
          answer+=(maxA+1); 
    }
    
    
    return answer;
}