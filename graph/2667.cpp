#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <ctype.h>
using namespace std;

int graph[25][25];
bool visited[25][25];
int danji_cnt;
int dx[] ={-1,1,0,0};
int dy[] ={0,0,-1,1};
int n;
vector<int> totals;
// 서로 다른 단지 개수 dfs로 계산
void dfs(int x,int y) {
    danji_cnt++;
    visited[x][y]=true;
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<0 || nx >=n || ny<0 || ny>=n) continue;
        if(graph[nx][ny] && !visited[nx][ny])
            dfs(nx,ny);
    }
}
int main()
{
    int result=0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",&graph[i][j]);
        }
    }
    int iter=0;
    int results[301];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]==1 && !visited[i][j]){
            danji_cnt=0;
            dfs(i,j);
            totals.push_back(danji_cnt);
            }
        }
    }
    sort(totals.begin(),totals.end());
    cout << totals.size() << "\n";
    for(int i=0;i<totals.size();i++)
        cout << totals[i] << "\n";
}