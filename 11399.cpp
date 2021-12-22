#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[MAX];
    int time=0;
    for(int i=0;i<n;i++)
        cin >> p[i];
    sort(p,p+n);
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++)
            time += p[j];
    cout << time;


    return 0;
}