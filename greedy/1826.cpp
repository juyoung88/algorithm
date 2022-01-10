#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> stations(n);
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
        cin >> stations[i].first >> stations[i].second;
    sort(stations.begin(),stations.end());        
    int l, p;
    cin >> l >> p;
    int count=0;

    int iter=0;
    while(p < l){
        while(stations[iter].first <= p && iter < n)
            pq.push(stations[iter++].second);
        if(!pq.empty()) {
            p += pq.top(),pq.pop();
            count++;
        }
        else if(iter==n || stations[iter].first > p){
            count=-1;
            break;
        }
    }
    cout << count;
    return 0;
}