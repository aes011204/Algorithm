#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    int pay =0;
    
    sort(d.begin(),d.end());
    
    for(int i = 0; i < d.size(); i++)
    {
        pay += d[i];
        if(pay == budget)
        {
            answer = i+1;
            break;
        }
        else if(pay > budget)
        {
            answer = i;
            break;
        }
        else if(i == d.size()-1)
            answer= d.size();
    }
    
    
    
    return answer;
}