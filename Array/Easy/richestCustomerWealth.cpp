#include <iostream>
#include <vector>

/* 4 minutes */ 

class Solution {
public:
    //4min
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int mostRich = 0;
        for(int i = 0; i < accounts.size(); i++) {
            int total = 0;
            for(int j = 0; j < accounts[0].size(); j++){
                total = total + accounts[i][j];
            }
            if(total > mostRich) {
                mostRich = total;
            }
        }
        return mostRich;
    }
};

int main() {
    return 0;
}