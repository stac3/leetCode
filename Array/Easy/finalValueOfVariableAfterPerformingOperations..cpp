#include <iostream>
#include <vector>
#include <string>

/* 5 minutes */ 

class Solution {
public:
    //5min
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        int count = 0;
        for(int i = 0; i < operations.size(); i++) {
            if(operations[i][1]=='+'){
                count++;
            }                
            else{
                count--;
            }                            
        }
        return count;
    }
};

int main() {
    return 0;
}