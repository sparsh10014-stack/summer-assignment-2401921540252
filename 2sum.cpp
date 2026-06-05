#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>result_indices;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1 ; j<nums.size();j++){

                if(nums[i]+nums[j]==target){
                    result_indices.push_back(i);
                    result_indices.push_back(j);

                    return result_indices;
                }

                
            }
        }

        return result_indices;
    }
};