#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
    int n;
    int liquid[100001];
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> liquid[i];
    sort(liquid,liquid+n);

    int start=0;
    int end=n-1;
    pair<int,int> diffs;
    int min=2000000000;
    int temp;
    while(start<end) {
        temp = liquid[start] + liquid[end];
        if(min > abs(temp)){
            min = abs(temp);
            diffs.first = liquid[start];
            diffs.second = liquid[end];
        }
        if(abs(temp)==0) break;
        if(abs(liquid[start]) > abs(liquid[end])) start++;
        else end--;
    }
    cout << diffs.first << " " << diffs.second << "\n";
    return 0;
}