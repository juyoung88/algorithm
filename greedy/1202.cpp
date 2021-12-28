#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    // jewels  = 무게들, 가격들
    // max_bag = 최대 무게들
    int n,bags;
    vector<pair<int,int>> jewels;
    pair<int,int> jewel;
    vector<int> max_bag;
    priority_queue<int> pq;
    long long total=0;
    int weight;
    cin >> n >> bags;
    for(int i=0;i<n;i++){
        cin >> jewel.first >> jewel.second;
        jewels.push_back(jewel);
    }
    sort(jewels.begin(),jewels.end());
    for(int i=0;i<bags;i++){
        cin >> weight;
        max_bag.push_back(weight);
    }
    sort(max_bag.begin(),max_bag.end());

    // for(auto &i:jewels)
    //     cout << i.first << " " << i.second << "\n";
    // for(auto &i:max_bag)
    //     cout << i << "\n";
    
    /*
    1 65
    2 99
    5 23
    2
    10
    */
    int iter=0;
    for(int i=0;i<bags;i++){
        while(iter < n && jewels[iter].first <= max_bag[i]){
            pq.push(jewels[iter++].second);
        }
        if(!pq.empty()){
            total += (long long)pq.top();
            pq.pop();
        }
    }
    
    cout << total;


    return 0;
}