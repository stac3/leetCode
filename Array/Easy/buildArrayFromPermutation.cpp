#include <iostream>
#include <vector>

/* 4 minutes */ 

class Solution {
public:
    std::vector<int> buildArray(std::vector<int>& nums) {        
        int size = nums.size();
        std::vector<int> ans;
        for(int i = 0; i< size; i++) {
            ans.push_back(nums[nums[i]]);
        } 
        return ans;
    }
};

int main() {
    return 0;
}