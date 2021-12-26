#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{ 
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int,int>> room(n);
    for(int i=0;i<n;i++)
        cin >> room[i].second >> room[i].first;
    sort(room.begin(),room.end()); // sort by first
    int current=0, result=0;
    for(int i=0;i<n;i++){
        if(current <= room[i].second){
            current = room[i].first;
            result++;
        }
    }
    cout << result;
    return 0;
}