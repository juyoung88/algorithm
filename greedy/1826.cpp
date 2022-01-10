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
        for(int i=0;i<n;i++){
            if(p >= stations[i].first)
                pq.push(stations[i].second);
            else break;
        }
        p += pq.top();
        pq.pop();
        count++;
        
    }
    cout << count;
    return 0;
}