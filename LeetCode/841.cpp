#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>
using namespace std;


class Solution {
public:
    // recursion DFS
    bool recurDFS(vector<vector<int>>& rooms) {
        stack<int> dfs{};
        set<int> visited{};
        visited.insert(0);
        for(const auto &i:rooms[0])
            dfs.push(i);
        while(!dfs.empty()) {
            int curr = dfs.top(); dfs.pop();
            if(visited.find(curr)==visited.end()){
                visited.insert(curr);
                for(const auto& i:rooms[curr])
                    dfs.push(i);
            }

        }

        return (visited.size()==rooms.size());
        
    }
};