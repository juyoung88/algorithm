#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int levels[101];

int main()
{
    int n;
    cin >> n;
    int count=0;
    for(int i=0;i<n;i++)
        cin >> levels[i];
    for(int i=n-1;i>0;i--){
        while(levels[i]<=levels[i-1]){
            levels[i-1]--;
            count++;
        }
    }
    cout << count;
    return 0;
}