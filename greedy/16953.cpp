#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int count=0;
    while(1){
        if(a>b) {
            cout << "-1";
            break;
        }
        if(b==a) {
            cout << count+1;
            break;
        }
        if(b%10==1){
            b--;
            b/=10;
        }
        else if (b%2==0){
            b/=2;
        }
        else {
            cout << "-1";
            break;
        }
        count++;
    }

    return 0;
}