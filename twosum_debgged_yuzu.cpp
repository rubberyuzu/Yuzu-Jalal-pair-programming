
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void twoSum(vector<int>& nums, int target) {
  vector<int> answer;
  int len = nums.size();
  int array[len]; // to store the nums;
  int sorted_array[len]; // sorted array
  int i = 0;
  for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
    array[i] = *it;
    sorted_array[i] = *it;
    i++;
  }
  sort(sorted_array, sorted_array+len);
 
int right_index = len-1;
for(i=0; i< len; i++){
  if(sorted_array[i] > target/2+1){
    break;
  }else{
  
    for(int j = right_index; j >i; j--){
      if (sorted_array[i] + sorted_array[j] > target){
        continue;
      }else if(sorted_array[i] + sorted_array[j] == target){
        //find indices
        for(int l = 0; l<len; l++){
          if(array[l] == sorted_array[i] || array[l] == sorted_array[j]){
              answer.push_back(l+1);
           } 
        }
        break;
      }else{
        right_index = j;
        break; // jump to next iteration(i++)
      }
    }  
  }

}

cout << answer.at(0) << endl;
cout << answer.at(1) << endl;


}

int main(){
  vector<int> nums;
  nums.push_back(7);
  nums.push_back(3);
  nums.push_back(6);
  int target = 9;
  twoSum(nums, target);

}

