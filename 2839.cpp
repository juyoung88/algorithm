#include <iostream>

using namespace std;

int main()
{
    int n,result=0;
    cin >> n;
    while(n>=0) {
        if(n%5==0){
            result += (n/5);
            cout << result;
            return 0;
        }
    }

    return 0;
}