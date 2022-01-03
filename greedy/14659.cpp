#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> hanzo(n);
    int check[30001];
    for(int i=0;i<n;i++){
        cin >> hanzo[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(hanzo[i] > hanzo[j])
                check[i]++;
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(check[i] > max)
            max = check[i];
    }

    cout << max;
    return 0;
}