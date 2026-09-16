#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    unordered_set<int> m;
    
    for(int i =0; i < nums.size();i++)
    {
        m.insert(nums[i]);
    }
    
    if(m.size() > nums.size()*.5f)
        return nums.size()*.5f;
    else 
        return m.size();
        
    return answer;
}