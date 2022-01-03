#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<pair<int,int>> range(m);
        for(int i=0;i<m;i++)
            cin >> range[i].second >> range[i].first;
        sort(range.begin(),range.end());
        int check[1001]={0,};
        for(int i=0;i<m;i++){
            for(int j=range[i].second;j<=range[i].first;j++){
                if(check[j]==0){
                    check[j]++;
                    break;
                }
            }
        }
        int answer=0;
        for(int i=1;i<=n;i++){
            if(check[i]!=0)
                answer++;
        }
        cout << answer << "\n";
    }



    return 0;
}