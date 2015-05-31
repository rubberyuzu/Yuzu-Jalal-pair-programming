#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int main(){
  string a = "1";
  string b = "1";
  int a_len = a.length();
  int b_len = b.length();
  int max_len = max(a_len, b_len);
  int min_len = min(a_len, b_len);
  int take_over = 0;
  char char_to_insert;

  string sum_ab;
  string max_string;
  if(max_len == a_len){
    max_string = a;
  }else{
    max_string = b;
  }

  for(int i = 0; i < max_len+1; i++){
    if(i<min_len){
      if(a[a_len-i-1]-'0'+b[b_len-i-1]-'0'+take_over<2){
        char_to_insert = '0'+a[a_len-i-1]-'0'+b[b_len-i-1]-'0'+take_over;
        sum_ab.insert(i, 1, char_to_insert);
        take_over = 0;
      }else{
        char_to_insert = '0'+(a[a_len-i-1]-'0'+b[b_len-i-1]-'0'+take_over)%2;        
        sum_ab.insert(i, 1, char_to_insert);
        take_over = 1;
      }
    }else if(i<max_len){
      if(max_string[max_len-i-1]-'0'+take_over <2){
        char_to_insert = '0' + max_string[max_len-i-1]-'0'+take_over;
        sum_ab.insert(i, 1, char_to_insert);
        take_over = 0;
      }else{
        char_to_insert = '0' + (max_string[max_len-i-1]-'0'+take_over)%2;
        sum_ab.insert(i, 1, char_to_insert);
        take_over = 1;
      }
    }else{
      if(take_over ==1){
        sum_ab.insert(i, 1, '1');
      }
    }
  }
  cout << sum_ab << endl;
  reverse(sum_ab.begin(), sum_ab.end());
  cout << sum_ab << endl;

}