#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    int count=0;
    int num;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    for(int i=0;i<n;i++){
        while(A[i]>0){
            if(A[i]%2==0){
                int flag=0;
                for(int j=0;j<n;j++){
                    if(A[j]%2!=0)
                        flag=1;
                }
                if(flag==1){
                    A[i]--;
                    count++;
                }
                else{
                    for(int j=0;j<n;j++)
                        A[j]/=2;
                    count++;
                }
            }
            else{
                A[i]--;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}