#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
//     for(auto it = ingredient.begin(); ingredient.end() -it >= 4;)
//     {
        
        
//         if(*it == 1)
//         {
//             if(*(it+1)==2)
//             {
//                 if(*(it+2)==3)
//                 {
//                     if(*(it+3)==1)
//                     {
//                         answer++;

//                          ingredient.erase(it, it+4);   
                        
//                         it = ingredient.begin();
//                     }
//                     else
//                         it++;
//                 }
//                 else
//                     it++;
//             }
//             else
//                 it++;
//         }
//         else
//         it++;
//     }
    int top=3;
    int read =3;
    
    for(int i = 3; i < ingredient.size();i++)
    {
        ingredient[top] = ingredient[read];
        
        if(top >= 3 &&
          ingredient[top]==1&&
          ingredient[top-1]==3&&
          ingredient[top-2]==2&&
          ingredient[top-3]==1)
        {
         answer++;
            top-=4;
        }
        
        top++;
        read++;
    }
    
    
    
    return answer;
}