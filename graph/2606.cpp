#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

bool visited[101];
vector<int> graph[100001];
int answer=0;
int n,m;

void dfs(int x) {
    visited[x] = true;
    if(x!=1) answer++;
    for(int i=0;i<graph[x].size();i++){
        int curr = graph[x][i];
        if(!visited[curr]) dfs(curr);
    }
}

int main()
{
    int start,end;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }
    dfs(1);
    cout << answer << "\n";

    return 0;
}