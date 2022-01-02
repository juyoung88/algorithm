#include <iostream>
#include <vector>
#include <functional>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    long long answer=0;
    cin >> n >> m;
    // vector<int> nums;
    long long num;
    for(int i=0;i<n;i++){
        cin >> num;
        pq.push(num);
        // nums.push_back(num);
    }
    while(m>0){
        long long a = pq.top();
        pq.pop();
        long long b=pq.top();
        pq.pop();
        long long sum = a+b;
        pq.push(sum);
        pq.push(sum);
        m--;
    }
    while(!pq.empty()){
        answer += pq.top();
        pq.pop();
    }
    // sort(nums.begin(),nums.end());
    
    cout << answer;

    return 0;
}