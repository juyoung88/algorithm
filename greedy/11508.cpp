#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int n;
    int repeat;
    int ans=0;
    cin >> n;
    if(n%3==0)
        repeat = n-n/3;
    else
        repeat = n-1;
    vector<int> price(n);
    for(int i=0;i<n;i++)
        cin >> price[i];
    sort(price.begin(),price.end(),greater<>());
    for(int i=0;i<n;i++){
        if(i%3==2) continue;
        ans += price[i];
    }
    cout << ans;



    return 0;
}