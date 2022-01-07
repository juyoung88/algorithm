#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> score(n);
    
    for(int i=0;i<n;i++){
        cin >> score[i];
    }
    int total=score[0];
    int add=score[0];
    for(int i=1;i<n;i++){
        total *=score[i];
        add += total;
    }
    cout << add;

    return 0;
}