#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int date[1001];
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> hw(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin >> hw[i].second >> hw[i].first;
    }
    sort(hw.begin(),hw.end(),greater<>()); // 점수순으로 정렬
    for(int i=0;i<n;i++){
        int curr_day = hw[i].second;
        int curr_point = hw[i].first;
        for(int j=curr_day;j>0;j--){
            if(date[j]==0){
                date[j]=1;
                total += curr_point;
                break;
            }
        }
    }

    cout << total;

    return 0;
}