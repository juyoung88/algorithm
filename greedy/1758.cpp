#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> tips(n);

    for(int i=0;i<n;i++)
        cin >> tips[i];
    sort(tips.begin(),tips.end(),greater<>());
    long long total=0;
    for(int i=0;i<n;i++){
        if((tips[i]-i)<0) continue;
        total += tips[i] - (i);
    }
    cout << total;


    return 0;
}