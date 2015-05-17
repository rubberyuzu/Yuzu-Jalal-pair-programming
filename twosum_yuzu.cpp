
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void twoSum(vector<int>& nums, int target) {
  vector<int> answer;
  int len = nums.size();
  int array[len]; // to store the nums;
  int copy_array[len];
  int i = 0;
  for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
    array[i] = *it;
    copy_array[i] = *it;
    i++;
  }
  sort(copy_array, copy_array+len);
  
for(i=0; i< len; i++){
  if(copy_array[i] > target/2+1){
    break;
  }else{
    for(int j = i; j< len; j++){
        if(copy_array[j] == target - copy_array[i]){
          for(int l = 0; l < len; l++){
            if(array[l] == copy_array[i] || array[l] == copy_array[j]){
              answer.push_back(l+1);
            } 
          }
          break;
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

