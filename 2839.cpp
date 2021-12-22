#include <iostream>

using namespace std;

int main()
{
    int n,result=0;
    cin >> n;
    result += n/5;
    n%=5;
    result += n/3;
    n%=3;
    if(n!=0)
        cout << "-1";
    else
        cout << result;

    return 0;
}