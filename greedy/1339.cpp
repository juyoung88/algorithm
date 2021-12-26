#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector<string> words;
int result=0;
int alpha[26];

int main()
{
    int n;
    cin >> n;
    string word;
    for(int i=0;i<n;i++){
        cin >> word;
        words.push_back(word);
    }
    for(int i=0;i<words.size();i++){
        int pow=1;
        for(int j=words[i].size()-1;j>=0;j--){
            int val = words[i][j]-'A';
            alpha[val] += pow;
            pow*=10;
        }
    }
    sort(alpha,alpha+26);
    int num=9;
    for(int i=25;i>=0;i--){
        if(alpha[i]==0) break;
        result += (alpha[i] * num);
        num--;
    }

    cout << result;
    return 0;
}