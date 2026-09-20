#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int add = 0;
    for(int i =0; i < arr.size(); i++)
    {
        add += arr[i];
    }
    answer = add/(double)arr.size();
    
    
    return answer;
}