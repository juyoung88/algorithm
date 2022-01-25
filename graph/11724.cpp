#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;


vector<int> graph[1001];
bool visited[1001];
int n,m,resut;

void dfs(int x){
    visited[x]=true;
    for(int i=0;i<graph[x].size();i++){
        int next = graph[x][i];
        if(!visited[next]) dfs(next);
    }

}

int main()
{
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int count=0;
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++) {
        if(!visited[i]) {
            count++;
            dfs(i);
        }
    }


    cout << count;


    return 0;
}
