#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>
using namespace std;

bool comp(string a, string b){
    return a+b>b+a;
}
int main()
{
    int k,n;
    cin >> k >> n;
    vector<string> num;
    string curr;
    string longest;
    for(int i=0;i<k;i++){
        cin >> curr;
        if(longest.size() < curr.size() || (longest.size() == curr.size() && longest < curr)) longest = curr;
        num.push_back(curr);
    }
    for(int i=0;i<n-k;i++)
        num.push_back(longest);
    sort(num.begin(),num.end(),comp);
    for(int i=0;i<num.size();i++)
        cout << num[i];
    
    
    return 0;
}