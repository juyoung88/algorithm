#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> stonks(n);
        long long int margin=0;
        for(int i=0;i<n;i++)
            cin >> stonks[i];
        int upper=-1;
        for(int i=n-1;i>=0;i--){
            upper = max(upper,stonks[i]);
            margin += upper - stonks[i];
        }
        cout << margin << "\n";

    }




    return 0;
}