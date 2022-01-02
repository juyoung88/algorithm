#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    /*
    input: {2,4,5,7,9}
    change it to an order where the difference between
    neighboring elements is maximum, but where
    the difficulty is minimum.
    if {2,9,7,4,5}
    difficulty: |2-9| = 7
    if {2,5,9,7,4}
    difficulty: |5-9| = 4
    */

   
   int t;
   cin >> t;
   while(t--){
        int n;
        cin >> n;
        vector<int> logs;
        int log;
        int answer=0;
        for(int i=0;i<n;i++){
            cin >> log;
            logs.push_back(log);
        }
        sort(logs.begin(),logs.end());
        for(int i=0;i<logs.size()-2;i++){
            answer = max(answer,abs(logs[i] - logs[i+2]) );
        }
        cout << answer << "\n";
   }
   
    


    return 0;
}