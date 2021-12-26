#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

int main()
{
    pair<int, int> interview[MAX];
    int test_case;
    int num;
    int results[20];
    cin >> test_case;
    for(int i=0;i<test_case;i++){
        cin >> num;
        for(int j=0;j<num;j++)
            cin >> interview[j].first >> interview[j].second;
        sort(interview,interview + num);
        int result = 1;
        int comp = interview[0].second;
        for(int j=0;j<num;j++) {
            if(interview[j].second < comp){
                result++;
                comp = interview[j].second;
            }
        }
        results[i] = result;

    }
    for(int i=0;i<test_case;i++)
        cout << results[i] << "\n";
    return 0;
}