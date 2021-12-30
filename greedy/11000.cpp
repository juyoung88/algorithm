#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    cin >> n;
    pair<int,int> *rooms = new pair<int,int>[n];
    for(int i=0;i<n;i++)
        cin >> rooms[i].first >> rooms[i].second;
    
    sort(rooms,rooms+n);
    pq.push(rooms[0].second);
    for(int i=1;i<n;i++){
        if(pq.top() <= rooms[i].first){
            pq.pop();
            pq.push(rooms[i].second);
        }
        else
            pq.push(rooms[i].second);
    }
    cout << pq.size();
    return 0;
}