#include "iostream"
#include "vector"

/* 2 minutes */ 

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        int lastSum = 0;
        std::vector<int> ans;
        for (int i =0; i < nums.size(); i++) {
            lastSum = lastSum + nums[i];
            ans.push_back(lastSum);
        }
        return ans;
    }
};

int main() {
    return 0;
}
