#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> pos;
    vector<int> neg;
    int answer=0;
    int num;
    int zero=0;
    for(int i=0;i<n;i++){
        cin >> num;
        if(num > 1)
            pos.push_back(num);
        else if(num==1)
            answer++;
        else if(num < 0)
            neg.push_back(num);
        else if(num==0)
            zero++;
    }
    if(pos.size()%2==1)
        pos.push_back(1);
    if(neg.size()%2==1){
        if(zero > 0)
            neg.push_back(0);
        else
            neg.push_back(1);
    }
    sort(pos.begin(),pos.end());
    sort(neg.begin(),neg.end());
    int psize = pos.size();
    int nsize = neg.size();
    for(int i=0;i<psize;i+=2){
        answer += pos[i]*pos[i+1];
    }
    for(int i=0;i<nsize;i+=2)
        answer += neg[i]*neg[i+1];
    cout << answer;
    return 0;
}