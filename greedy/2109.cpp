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
    vector<pair<int, int>> schools(n);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
        cin >> schools[i].second >> schools[i].first;

    sort(schools.begin(),schools.end());
    int maximum=0;
    for(int i=0;i<n;i++){
        pq.push(schools[i].second);
        maximum += schools[i].second;

        if(pq.size()>schools[i].first) {
            maximum -= pq.top();
            pq.pop();
        }
    }
    cout << maximum;
    return 0;
}