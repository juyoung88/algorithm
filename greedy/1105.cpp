#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string l,r;
    cin >> l >> r;
    
    if(l.length() != r.length()){
        cout << "0";
        return 0;
    }
    int count=0;
    for(int i=0;i<l.length();i++){
        if(l[i] == r[i] && l[i] == '8')
            count++;
        else if(l[i]!=r[i])
            break;
    }
    cout << count;
    return 0;
}