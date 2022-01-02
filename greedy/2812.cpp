#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>
#include <stack>
#include <math.h>
using namespace std;

int main()
{
    int n,k;
    vector<char> nums;
    string num;
    int count=0;
    cin >> n >> k >> num;
    int i=0;
    while(i!=num.size()){
        while(k!=0 && !nums.empty() && nums.back() < num[i]){
            nums.pop_back();
            k--;
        }
        nums.push_back(num[i]);
        i++;
    }
    while(k--){
        nums.pop_back();
    }
    for(int i=0;i<nums.size();i++){
        cout << nums[i];
    }

    return 0;
}