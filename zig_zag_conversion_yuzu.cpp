#include <iostream>
#include <string>

using namespace std;

string convert(string s, int numRows) {
  if(numRows==1){
    return s;
  }
  int i, j, k;
  int len_of_s = s.length();
  int cycle = (numRows*2-2);

  int numCols = (len_of_s/cycle)*(numRows-1);
  if((len_of_s%cycle) <= numRows){
    numCols++;
  }else{
    numCols += (len_of_s%cycle)-numRows+1;
  }

  char result[numRows][numCols];
  for (j = 0; j< numRows ; ++j){
    for (k = 0; k< numCols ; ++k){
      result[j][k]=' ';
    }
  }


  int col_count = 0;
  int pos_in_cycle;
  for (int i = 0; i < len_of_s; ++i){
    pos_in_cycle = i%cycle;
    if(pos_in_cycle < numRows){
      if(pos_in_cycle==0&&i!=0){
        col_count++;
      }
      result[pos_in_cycle][col_count]=s[i];
    }else{
      col_count++;
      result[numRows-(pos_in_cycle+2-numRows)][col_count]=s[i];
    }
  }

  string result_string;
  for (j = 0; j< numRows ; ++j){
    for (k = 0; k< numCols ; ++k){
      if(result[j][k]!=' '){
        result_string += result[j][k];
      }
    }
  }

  return result_string;
}

int main(){

cout<< convert("ABCDE", 4) << endl;
}