#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]) cnt++;
    }
    if(cnt)
        cout << cnt/2;
    else
        cout << "1";

    return 0;
}