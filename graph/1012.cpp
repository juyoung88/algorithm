#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

bool visited[51][51];
int graph[51][51];
int t,n,m,k;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void dfs(int x,int y) {
    visited[x][y]=true;
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= n || ny<0 || ny>=m) continue;
        if(graph[nx][ny]==1 && !visited[nx][ny])
            dfs(nx,ny);
    }
}

int main()
{
    cin >> t;
    while(t--){
        int count=0;
        cin >> m >> n >> k;
        for(int i=0;i<k;i++){
            int x,y;
            cin >> x >> y;
            graph[y][x]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(graph[i][j]==1 && !visited[i][j]){
                    count++;
                    dfs(i,j);
                }
            }
        }
        cout << count << "\n";
        memset(visited,false,sizeof(visited));
        memset(graph,0,sizeof(graph));
    }

    return 0;
}