#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> trees(n);
    for(int i=0;i<n;i++)
        cin >> trees[i];
    sort(trees.begin(),trees.end());
    for(int i=0;i<n;i++){
        trees[i] -= i;
    }
    sort(trees.begin(),trees.end());
    int answer = trees.back() + n + 1;
    cout << answer;
    

    return 0;
}