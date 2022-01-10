#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(string a, string b){
    return a+b > b+a;
}

int main()
{
    int n;
    cin >> n;
    int a;
    vector<string> nums;
    for(int i=0;i<n;i++){
        cin >> a;
        nums.push_back(to_string(a));
    }
    sort(nums.begin(),nums.end(),comp);
    string answer="";
    if(nums.front()=="0"){
        cout << "0";
        return 0;
    }
    for(int i=0;i<nums.size();i++)
        answer += nums[i];

    cout << answer;
    return 0;
}