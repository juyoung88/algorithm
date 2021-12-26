#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int price;
    int input;
    int result=0;
    cin >> input;
    price = 1000-input;
    result += price/500;
    price%=500;
    result += price/100;
    price%=100;
    result += price/50;
    price %=50;
    result += price/10;
    price %=10;
    result += price/5;
    price %=5;
    result += price/1;
    price %=1;
    cout << result;


    return 0;
}