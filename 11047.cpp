#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 10

int n,coins[MAX];
int k=0;

int main()
{
    int result=0;
    int noc=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    for(int i=n-1;i>=0;i--){
        if(k/coins[i] != 0) {
            result += k/coins[i];
            k%=coins[i];
        }
        
    }
    cout << result;
    return 0;
}