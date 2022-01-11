#include <iostream>
using namespace std;

int check[1000001]={0,};
int main()
{
    int n;
    cin >> n;
    int height;
    int arrows=0;
    for(int i=0;i<n;i++){
        cin >> height;
        if(check[height+1]==0){
            arrows++;
            check[height]++;
        }
        else{
            check[height+1]--;
            check[height]++;
        }
    }
    cout << arrows;
    return 0;
}