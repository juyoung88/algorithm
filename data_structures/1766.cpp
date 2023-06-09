#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
#include <map>
#define MAX 32001

using namespace std;

int vc[MAX];
vector<int> problem[MAX];
/*
    1 3
    2 4

    1 -> 2 -> 3 -> 4

    3 4
    5 6
    3 -> 4 -> 5 -> 6

    3 1 
    2 4

    2 -> 3 -> 1 -> 4


*/

int main() {
    int N,M;
    int a,b;
    priority_queue<int, vector<int>,greater<int>> pq;
    cin >> N >> M;
    
    for(int i=0;i<M;i++) {
        cin >> a >> b;
        problem[a].push_back(b);
        vc[b]++;
    }
    for(int i=1;i<=N;i++) {
        if(vc[i]==0)
            pq.push(i);
    }
    while(!pq.empty()) {
        int cur = pq.top();
        pq.pop();
        cout << cur << " ";
        for(int i=0;i<problem[cur].size();i++) {
            int next = problem[cur][i];
            vc[next]--;
            if(vc[next]==0)
                pq.push(next);
        }
    }




    return 0;
}