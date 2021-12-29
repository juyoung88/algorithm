#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l=1,p=1,g=1;
    int answer[100000];
    int iter=0;
    while(1){
        cin >> l >> p >> g;
        if(l==0 && p==0 && g==0) break;
        answer[iter++] += (g/p)*l + min(g%p,l);
    }
    for(int i=0;i<iter;i++)
        cout << "Case " << i+1 << ": " << answer[i] << "\n";


    return 0;
}