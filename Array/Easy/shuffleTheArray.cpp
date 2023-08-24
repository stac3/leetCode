#include <iostream>
#include <vector>

/* 3 minutes */ 

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> ans;
        for(int i = 0; i < n; i++){
              ans.push_back(nums[i]);
              ans.push_back(nums[i+n]);
        }
        return ans;
    }
};

int main() {
    return 0;
}