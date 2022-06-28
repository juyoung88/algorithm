#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int lcs(char* a, char*b, int x, int y)
{
    int temp[x+1][y+1];
    for(int i=0;i<=x;i++) {
        for(int j=0;j<=y;j++) {
            if(i==0 || j==0)
                temp[i][j]=0;
            else if(a[i-1] == b[j-1])
                temp[i][j] = temp[i-1][j-1] + 1;
            else
                temp[i][j] = max(temp[i-1][j],temp[i][j-1]);
        }
    }
    return temp[x][y];
}

int main()
{
    char a[1001];
    char b[1001];
    cin >> a;
    cin >> b;
    cout << lcs(a,b,strlen(a),strlen(b));


    return 0;
}