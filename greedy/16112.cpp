#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <math.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<int> exp(n);
    ll total=0;
    for(int i=0;i<n;i++)
        cin >> exp[i];
    sort(exp.begin(),exp.end());
    
    for(ll i=1;i<n;i++){
        ll temp = exp[i] * min(i,k);
        total += temp;
    }
    cout << total;
    return 0;
}