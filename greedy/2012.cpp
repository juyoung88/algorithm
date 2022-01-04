#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> places(n);
    for(int i=0;i<n;i++)
        cin >> places[i];
    sort(places.begin(),places.end());
    long long err=0;
    for(int i=1;i<=n;i++){
        err += abs(places[i-1]-i); 
    }
    cout << err;
    return 0;
}