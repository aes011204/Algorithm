#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = 0;
    
    bool canPlace = true;
    
    sort(mats.begin(), mats.end(),greater<int>());
   
     for(int i = 0; i < mats.size(); i++)
     {
         int size = mats[i];
         
        for(int h =0; h + size <= park.size(); h++)
        {
            for(int w =0; w + size <= park[0].size(); w++)
            {
                for(int ph = 0; ph < size; ph++)
                {
                    for(int pw = 0; pw < size; pw++)
                    {
                        if(park[h+ph][w+pw] != "-1")
                        {
                            canPlace = false;
                             break;
                        }   
                    }
                if(canPlace == false)
                    break;
                }       
            if(canPlace == true)
                return size;
            else 
                canPlace = true;
            }
        }
    }  
         

    
return -1;
}