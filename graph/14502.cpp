#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n,m;
int graph[8][8];
int graph2[8][8];
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};
int c=0;

void copyGraph(int (*dest)[8],int (*orig)[8]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            dest[i][j]=orig[i][j];
        }
    }
}

void bfs() {
    queue<pair<int,int>> q;
    int endGraph[8][8];
    copyGraph(endGraph,graph2);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(endGraph[i][j]==2) {
                q.push(make_pair(i,j));
            }
        }
    }
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < m) {
                if(endGraph[nx][ny]==0) {
                    endGraph[nx][ny]=2;
                    q.push({nx,ny});
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(endGraph[i][j]==0)
                cnt++;
        }
    }
    c = max(c,cnt);
}

void wall(int cnt) {
    if(cnt==3) {
        bfs();
        return;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(graph2[i][j]==0) {
                graph2[i][j]=1;
                wall(cnt+1);
                graph2[i][j]=0;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
 	cout.tie(0);
	
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> graph[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(graph[i][j]==0) {
                copyGraph(graph2,graph);
                graph2[i][j]=1;
                wall(1);
                graph2[i][j]=0;
            }
        }
    }
    cout << c << endl;
}
