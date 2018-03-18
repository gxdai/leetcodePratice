#include<vector>
using std::vector;
#include<unordered_map>
using std::unordered_map;



/* check half the number of pair is enough */
/* calcualting the sum of the half number of pairs is enough */
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            std::unordered_map<int, int> record;
            // iterating over all the elements
            for (int i = 0; i < nums.size(); ++i) {
                // check if the key is in the record
                // for the 0-th step, it will be skipped
                auto found = record.find(nums[i]);
                if (found != record.end()) {
                    return {found->second, i};
                }
                record.emplace(target - nums[i], i);
            }
            return {-1, -1};
        }
};
