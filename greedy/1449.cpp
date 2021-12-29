#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int n,l;
    cin >> n >> l;
    int temp;
    vector<int> holes;
    int hole;
    int answer=1;
    for(int i=0;i<n;i++){
        cin >> hole;
        holes.push_back(hole);
    }
    sort(holes.begin(),holes.end());
    temp = holes[0];
    for(int i=1;i<n;i++){
        if(holes[i] - temp + 1 > l){
            answer++;
            temp = holes[i];
        }

    }
    cout << answer;

    return 0;
}