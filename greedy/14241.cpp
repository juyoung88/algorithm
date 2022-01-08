#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> slimes(n);
    for(int i=0;i<n;i++){
        cin >> slimes[i];
    }
    int sum=0;
    while(n>1){
        sort(slimes.begin(),slimes.end());

        int back = slimes.back();
        slimes.pop_back();

        int back_2 = slimes.back();
        slimes.pop_back();
        slimes.push_back(back + back_2);
        n--;
        sum += back*back_2;
    }
    cout << sum;

    return 0;
}