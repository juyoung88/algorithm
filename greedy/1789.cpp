#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    long long sum=0;
    int count=0;
    int num=1;
    cin >> n;
    while(1){
        sum += num;
        count++;
        if(sum > n){
            count--;
            break;
        }
        num++;
    }
    cout << count;

    return 0;
}