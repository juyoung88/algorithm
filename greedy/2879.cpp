#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> before(n);
    vector<int> correct(n);
    for(int i=0;i<n;i++)
        cin >> before[i];
    for(int i=0;i<n;i++){
        int tab;
        cin >> tab;
        correct[i] = before[i]-tab;
    }
    if(n==1)
        cout << abs(correct[0]) << "\n";
    else {
        int result=0;
        int prev=correct[0];
        int curr=correct[0];
        for(int i=1;i<n;i++){
            if(correct[i] >= 0) {
                if(prev < 0){
                    result+=abs(prev);
                    prev=correct[i];
                }
                else if(prev < correct[i])
                    prev = correct[i];
                else {
                    result += abs(prev) - abs(correct[i]);
                    prev = curr = correct[i];
                }
            }
            else {
                if(prev > 0) {
                    result += prev;
                    prev = correct[i];
                }
                else if(prev > correct[i])
                    prev = correct[i];
                else {
                    result += abs(prev) - abs(correct[i]);
                    prev = curr = correct[i];
                }
            }
        }
        result += abs(prev);
        cout << result;
    }
    return 0;
}