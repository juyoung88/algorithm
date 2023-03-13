#include <iostream>
using namespace std;

int map[51][51];
int visited[51][51];
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
int m,n;
void dfs(int y, int x, int direction, int count) {
    for(int i=0;i<4;i++) {
        int next_direction = (direction+3-i)%4;
        int next_y = y + dy[next_direction];
        int next_x = x + dx[next_direction];
        if(next_y < 0 || next_y >=n || next_x >= m ||  next_x < 0 || map[next_y][next_x]==1)
            continue;
        if(visited[next_y][next_x]==0 && map[next_y][next_x]==0) {
            visited[next_y][next_x]=1;
            dfs(next_y,next_x,next_direction,count+1);
        }
    }
    int back_direction = direction+2<4 ? direction+2 : direction-2;
    int back_y = y + dy[back_direction];
    int back_x = x + dx[back_direction];
    if(0<=back_y && back_y <= n && 0<= back_x && back_x <= m) {
        if(map[back_y][back_x]==0)
            dfs(back_y,back_x,direction,count);
        else
            cout << count << endl;
            exit(0);
    }
}
int main() 
{
    int direction;
    int x,y;
    int count=0;
    int err=0;
    cin >> n >> m;
    cin >> y >> x >> direction;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> map[i][j];
            visited[i][j]=0;

        }
    }
    visited[y][x]=1;
    dfs(y,x,direction,1);
    return 0;
}
