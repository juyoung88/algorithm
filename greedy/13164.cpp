#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main() 
{
    int n,k;
    cin >> n >> k;

    vector<int> children(n);
    vector<pair<int,int>> h_diff(n);
    
    for(int i=0;i<n;i++) {
        cin >> children[i];

        if(i!=0){
            h_diff[i].first = children[i] - children[i-1];
            h_diff[i].second = i;
        }
    }

    sort(h_diff.begin(),h_diff.end(),greater<>());

    int answer=0;
    int temp=0;
    vector<int> result(k-1);
    for(int i=0;i<k-1;i++)
        result[i] = h_diff[i].second;
    sort(result.begin(),result.end());
    result.push_back(n);

    for(int i=0;i<result.size();i++){
        answer += (children[result[i]-1] - children[temp]);
        temp = result[i];
    } 

    cout << answer;

    return 0;
}