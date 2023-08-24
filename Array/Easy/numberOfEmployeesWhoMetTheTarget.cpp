#include <iostream>
#include <vector>

/* 8 minutes */ 

class Solution {
    
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
        int count = 0;
        for (int i = 0; i < hours.size(); i++) {
            if(hours[i] >= target){
                count++;
            }
        }
        return count;
    }
};

int main() {
    return 0;
}