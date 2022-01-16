#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    // n 이 끊어진 줄 개수
    // m 이 기타줄 브랜드 개수
    // 기타줄 6개 들어있는 패키지 가격, 낱개 가격
    vector<int> six(m);
    vector<int> one(m);
    for(int i=0;i<m;i++){
        cin >> six[i] >> one[i];
    }
    // 6개 들어있는 가격 오름차순으로 정렬
    sort(six.begin(),six.end());
    sort(one.begin(),one.end());
    int total=0;
    int min=1000;
    int lines=n;
    while(lines>0){
        if(lines>=6){
            if(six[0] > one[0]*6){
                total += one[0]*lines;
                lines -= lines;
            }
            else {
                total += six[0];
                lines -=6;
            }
        }
        else {
            if(six[0] < one[0]*lines){
                total += six[0];
                lines-=6;
            }
            else{
                total += one[0]*lines;
                lines-=lines;
            }
        }
    }

    cout << total;

    return 0;
}