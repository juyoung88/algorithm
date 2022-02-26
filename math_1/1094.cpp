#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result=0;
    int count=0;
    while(n>=1){
        if(n%2==1)
            count++;
        n/=2;
    }
    cout << count;


    return 0;
}