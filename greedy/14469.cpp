#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // 3 + 2 + 7
    vector<pair<int,int>> cows;
    for(int i=0;i<n;i++){
        int start,end;
        cin >> start >> end;
        cows.push_back(make_pair(start,end));
    }
    sort(cows.begin(),cows.end());
    int total=cows[0].first + cows[0].second;
    for(int i=1;i<n;i++){
        if(cows[i].first >= total){
            total = cows[i].first+cows[i].second;
        }
        else{
            total += cows[i].second;
        }
    }
    cout << total;
    return 0;
}