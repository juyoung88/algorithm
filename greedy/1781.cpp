#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int date, ramen;
    vector<pair<int,int>> probs(n);
    priority_queue<int,vector<int>,greater<int>> pq;
    int total=0;
    for(int i=0;i<n;i++)
        cin >> probs[i].first >> probs[i].second;
    sort(probs.begin(),probs.end());
    for(int i=0;i<n;i++){
        pq.push(probs[i].second);
        total += probs[i].second;
        if(pq.size() > probs[i].first){
            total -= pq.top();
            // cout << pq.top();
            pq.pop();
        }
    }
    cout << total;
    return 0;
}