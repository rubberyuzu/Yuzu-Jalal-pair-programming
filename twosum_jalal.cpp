#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

void twoSum(vector<int>& nums, int target) {
    std::vector<int> result;

    // unordered_map with numbers
    std::unordered_map<int, int> numbers;
    for (int i = 0; i < nums.size(); ++i) {
        // key = the number, value = the number’s index
        numbers[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); ++i) {
        // does unordered_map contain target - number?
        std::unordered_map<int, int>::const_iterator search = numbers.find(target - nums[i]);
        if(search != numbers.end() && search->second != i) {
            result.push_back(i);
            result.push_back(search->second);
            break;
        }
    }
    cout << result.at(0) << endl;
    cout << result.at(1) << endl;
}

int main(){
  vector<int> nums;
  nums.push_back(0);
  nums.push_back(4);
  nums.push_back(4);
  nums.push_back(5);
  int target = 9;
  twoSum(nums, target);

}
