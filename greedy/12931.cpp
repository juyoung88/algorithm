#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int A[50];
    int count=0;
    int num;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    while(1) {
        bool allzero=true;
        bool increment = false;
        for(int i=0;i<n;i++){
            if(A[i]) allzero = false;
            if(A[i]%2){
                A[i]--;
                count++;
                increment=true;
            }
        }
        if(allzero) break;
        if(!increment){
            for(int i=0;i<n;i++)
                A[i]/=2;
            count++;
        }
    }
    cout << count;
    return 0;
}