#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N;
int map[101][101];
bool visited[101][101]={0,};
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
vector<int> regions;
int cnt;

void bfs(int y, int x,int h) {
    queue<pair<int,int>> q;
    visited[y][x] = true;
    q.push(make_pair(y,x));

    while(!q.empty()) {
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for(int i=0;i<4;i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny<0 || nx<0 || ny>=N || ny>=N) continue;
            if(map[ny][nx]>=h && !visited[ny][nx]) {
                visited[ny][nx]=true;
                q.push(make_pair(ny,nx));
            }
        }
    }
}

void reset() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            visited[i][j]=0;
        }
    }
    cnt=0;
}
int main() {

    int maxHeight=-1;
    cin >> N;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cin >> map[i][j];
            if(map[i][j] > maxHeight)
                maxHeight = map[i][j];
        }
    }
    for(int h=1;h<=maxHeight;h++) {

        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                if(map[i][j]>=h && !visited[i][j]) {
                    bfs(i,j,h);
                    cnt++;
                }
            }
        }
        regions.push_back(cnt);
        reset();
    }
    sort(regions.begin(),regions.end());
    cout << regions.back();
    return 0;
}