#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <functional>

using namespace std;

int main()
{
    char n[1000000];
    int check=0;
    int flag=0;
    cin >> n;
    vector<int> num;
    
    for(int i=0;i<strlen(n);i++){
        check += (n[i]-'0');
        num.push_back((n[i]-'0'));
    }

    sort(num.begin(),num.end(),greater<>());

    if(check%3!=0 || num.back()!=0)
        cout << "-1";
    else
        for(auto &i:num)
            cout << i;
    return 0;
}