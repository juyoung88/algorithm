#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long a,b;
    cin >> a >> b;
    int count=0;
    while(1){
        if(b==a) break;
        if(b%10==1){
            b--;
            b/=10;
            count++;
        }
        else if (b%2==0){
            b/=2;
            count++;
        }
        else break;
    }
    if(a!=b)
        cout << "-1";
    else
        cout << count+1;

    return 0;
}