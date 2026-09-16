#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int j = 0;
    for(int i = 0; i < arr.size();i++)
    {
        if(i == 0)
        {
            answer.push_back(arr[0]);
            j++;
        }
        else if(answer[j-1]!=arr[i])
        {
            answer.push_back(arr[i]);
            j++;
        }
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;

    return answer;
}