#include <iostream>
#include <vector>

/* 3 minutes */ 

class Solution {
public:
    //5min 
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int maxValue = candies[0];
        //int max = *max_element(candies.begin(), candies.end());

        for(int i = 1; i < candies.size(); i++){
            if(candies[i] > maxValue){
                maxValue = candies[i];
            }            
        } 
        std::vector<bool> ans; 
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies < maxValue){
                ans.push_back(false);
            }
            else {
                ans.push_back(true);
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}