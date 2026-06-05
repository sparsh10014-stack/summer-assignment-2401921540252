#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insert_index=1;

        for( int i =1 ; i< nums.size(); i ++){
            if(nums[i-1]!=nums[i]){
                nums[insert_index]=nums[i];
                insert_index++;

            }
        }

        return insert_index;
    }
};