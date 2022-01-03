#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> hanzo(n);
    int check[30001]={0,};
    for(int i=0;i<n;i++){
        cin >> hanzo[i];
    }
    int answer=-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(hanzo[i] > hanzo[j])
                check[i]++;
            else
                break;
        }
        answer = max(check[i],answer);
    }

    cout << answer;
    return 0;
}