#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    vector<int> crains(n);
    for(int i=0;i<n;i++)
        cin >> crains[i];
    cin >> m;
    vector<int> boxes(m);
    for(int i=0;i<m;i++)
        cin >> boxes[i];
    sort(crains.begin(),crains.end(),greater<>());
    sort(boxes.begin(),boxes.end(),greater<>());

    if(crains[0] < boxes[0]){
        cout << "-1";
        return 0;
    }
    int box_iter=0;
    int curr=0;
    int limit = n-1;
    int count=0;
    while(!boxes.empty()){
        count++;
        for(int i=0;i<crains.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(crains[i] >= boxes[j]){
                    boxes.erase(boxes.begin() + j);
                    break;
                }
            }
        }
    }

    cout << count;

    return 0;
}
        
    