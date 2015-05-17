#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> result {};

        // unordered_map with numbers
        std::unordered_map<int, int> numbers = {};
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            auto i = std::distance(nums.begin(), it);
            numbers[some_iterator] = i;
        }

        for (auto it = nums.begin(); it != nums.end(); ++it) {
            // get current index
            auto i = std::distance(nums.begin(), it);

            // does unordered_map contain target - number?
            std::unordered_map<int, int>::const_iterator search = nums.find(target - it);
            if(search != nums.end()) {
                if (search->first > it) {
                    result.push_back(i);
                    result.push_back(search->second);
                } else {
                    result.push_back(search->second);
                    result.push_back(search->i);
                }
            }
        }
        return result;
    }
};
