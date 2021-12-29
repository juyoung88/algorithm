#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    int weight;
    int total=1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> weight;
        v.push_back(weight);
    }
    sort(v.begin(),v.end());
    // 1 1 2 3 6 7 30
    for(int i=0;i<n;i++){
        if(v[i] > total) break;
        total += v[i];
    }
    cout << total;
    return 0;
}