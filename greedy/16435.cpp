#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,l;
    cin >> n >> l;
    int length=l;
    vector<int> fruits(n);
    for(int i=0;i<n;i++)
        cin >> fruits[i];
    sort(fruits.begin(),fruits.end());
    for(int i=0;i<n;i++)
        if(l>=fruits[i])
            l++;
    cout << l;

    return 0;
}