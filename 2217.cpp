#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 100000
using namespace std;


int main()
{
    int n;
    cin >> n;
    int rope;
    vector<int> ropes;
    for(int i=0;i<n;i++){
        cin >> rope;
        ropes.push_back(rope);
    }
    sort(ropes.begin(),ropes.end());

    int max_weight=0;
    for(int i=0;i<n;i++){
        max_weight = max(max_weight,ropes[n-(i+1)]*(i+1));
    }
    cout << max_weight;
    
    return 0;
}