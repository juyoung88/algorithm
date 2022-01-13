#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int dp[1000001];

int main()
{
    int n;
    cin >> n;
    
    int num;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin >> num;
        dp[num] = dp[num-1]+1;
        ans = max(ans,dp[num]);
    }
    cout << n-ans;
    

    return 0;
}