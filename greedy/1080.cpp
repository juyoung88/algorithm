#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >>k;
    char arr_1[50][50];
    char arr_2[50][50];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin >> arr_1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin >> arr_2[i][j];
        }
    }

    for(int i=0;i<n-2;i++){
        for(int j=0;j<k-2;j++){
            if(arr_1[i][j] != arr_2[i][j]){
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(arr_1[k][l]=='1')
                            arr_1[k][l]='0';
                        else
                            arr_1[k][l]='1';
                    }
                }
                count++;
            }
            else continue;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr_1[i][j] != arr_2[i][j]){
                cout << "-1";
                return 0;
            }
        }
    }
    cout << count;
    return 0;
}