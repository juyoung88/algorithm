#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n;
int k;
int dp[101][100001];
int w[101];
int v[1001];

int main()
{
    // Weight w and Value v
    // MAX k
    // 물건들의 가치의 최대값 구하기
    // 물품의 수 1 <=N <= 100
    // 총무게 k <=100,000
    // 각 무게 w <=100,000
    // 각 가치 v <=1,000
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> w[i] >> v[i];
    
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= k; j++){
            dp[i][j] = max(dp[i][j],dp[i-1][j]);
            if(j>=w[i])
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout << dp[n][k];


    return 0;
}