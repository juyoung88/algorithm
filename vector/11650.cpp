#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(const pair<int, int> &a, const pair<int, int> &b) {
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}
int main()
{
    // 속도 향상
    ios_base::sync_with_stdio(false);

    vector<pair<int, int>> v;
    int n;
    cin >> n;
    int a,b;
    for(int i=0;i<n;i++) {
        cin >> a >> b;
        v.push_back(pair<int, int>(a,b));
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++)
        cout << v[i].first << " " << v[i].second << "\n";

    return 0;  
}