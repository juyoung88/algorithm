#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;


// 40 30 30
// 40+30 30
// 40 30
// 40+30
// 40
// result= 70+70 = 140
// 30 50 40 30
// 1 5 4 3 7 3


int main()
{
    int n;
    cin >> n;
    vector<int> cards;
    int result=0;
    int max=0;
    for(int i=0;i<n;i++) {
        int card;
        cin >> card;
        cards.push_back(card);
    }
    sort(cards.begin(),cards.end(),greater<>());
    
    for(int i=1;i<n;i++) {
        int temp = cards.front() + cards[i];
        result+=temp;
    }

    cout << result;

    return 0;
}