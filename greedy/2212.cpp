#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;

 /*
 input:
 6
 2
 1 6 9 3 6 7

my thinking:
sort() = 1 3 6 6 7 9
at least on one point
2 3 0 1 2
sort() = 0 1 2 2 3
6 - 2  = 4 connections is least required
0 + 1 + 2 + 2 = 5 is least
 */


int main()
{
    int n,k;
    cin >> n >> k;
    int sens[MAX];
    int con[MAX];
    for(int i=0;i<n;i++){
        cin >> sens[i];
    }
    sort(sens,sens+n);
    // for(int i=0;i<n;i++)
    //     cout << sens[i] << "\n";
    for(int i=0;i<n-1;i++){
        con[i] = sens[i+1] - sens[i];
    }
    // for(int i=0;i<n-1;i++)
    //     cout << con[i] << "\n";
    sort(con,con+(n-1));
    int result=0;
    for(int i=0;i<(n-k);i++)
        result += con[i];
    cout << result;



    return 0;
}