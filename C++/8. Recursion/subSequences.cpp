#include <iostream>
using namespace std;

void subSeq(string str, string output, int i){
    if(i>=str.length()){
        cout << output << endl;
        return;
    }

    subSeq(str, output, i+1);

    output.push_back(str[i]);
    subSeq(str, output, i+1);
}

int main() {
  string str = "abc";
  string output = "";
  int i=0;
  subSeq(str, output, i);
  return 0;
}