#include <iostream>
#include <algorithm>
#define max_city 100000
using namespace std;
int main()
{
    int n;
    cin >> n;
    long cost[max_city];
    long distance[max_city];
    long long total_distance=0;
    for(int i=0;i<n-1;i++){
        cin >> distance[i];
        if(i>0)
            total_distance += distance[i];
    }
    for(int i=0;i<n;i++){
        cin >> cost[i];
    }
    long long result=0;
    long long curr_cost = 1000000000;
    for(int i=0;i<n-1;i++){
        if(curr_cost > cost[i]){
            curr_cost = cost[i];
        }
        result += curr_cost * distance[i];
    }
    cout << result;


    return 0;
}