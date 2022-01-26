#include <iostream>
#include <cstring>
using namespace std;

bool graph[51][51];
bool visited[51][51];
int w=-1,h=-1;
// 상,하,좌,우,대각 네군데
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1};

void dfs(int y, int x) {
    visited[y][x]= true;
    for(int i=0;i<8;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
        if(graph[ny][nx] && !visited[ny][nx])
            dfs(ny,nx);
    }
}

int main()
{
    while(1){
        int count=0;
        cin >> w >> h;
        if(w==0 && h==0) break;
        for(int j=0;j<h;j++)
            for(int i=0;i<w;i++)
                cin >> graph[j][i];
        for(int j=0;j<h;j++){
            for(int i=0;i<w;i++){
                if(graph[j][i] && !visited[j][i]){
                    count++;
                    dfs(j,i);
                }
            }
        }
        cout << count<<"\n";
        memset(graph,false,sizeof(graph));
        memset(visited,false,sizeof(visited));
    }
    return 0;
}