#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int n;
    int num;
    priority_queue<int,vector<int>,greater<int>> pq;
    int answer=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        pq.push(num);
    }
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        answer += a+b;
        pq.push(a+b);
    }
    cout << answer;
    return 0;
}