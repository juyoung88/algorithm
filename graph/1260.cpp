#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
    

bool visited[1001];
vector<int> graph[10000];

void dfs(int x) {
        visited[x] = true;
        cout << x << " ";
        for(int i=0;i<graph[x].size();i++){
            int y = graph[x][i];
            if(!visited[y]) dfs(y);
        }
    }
void bfs(int x) {
    queue<int> q;
    q.push(x);
    visited[x]=true;
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int i=0;i<graph[curr].size();i++){
            int next = graph[curr][i];
            if(!visited[next]){
                visited[next]=true;
                q.push(next);
            }
        }
    }
}
int main(void)
{   
    int n,m,init,start,end;
    cin >> n >> m >> init;
    for(int i=0;i<m;i++){
        cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }
    for(int i=1;i<=n;i++)
        sort(graph[i].begin(),graph[i].end());
    dfs(init);
    cout << "\n";
    memset(visited,false,sizeof(visited));
    bfs(init);
    

    return 0;
}