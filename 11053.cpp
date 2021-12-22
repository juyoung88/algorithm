#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int num[1001];
    int dp[1001];
    
    for(int i=1;i<=n;i++) {
        cin >> num[i];
    }
    int max=0;
    for(int i=1;i<=n;i++) {
        dp[i] = 1;
        for(int j=1;j<=i;j++) {
            if(num[i] > num[j] && dp[i] < dp[j]+1)
                dp[i]++;
        }
        if(max<dp[i]) max = dp[i];
    }
    cout << max;
    return 0;   
}