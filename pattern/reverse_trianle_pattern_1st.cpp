#include <iostream>
using namespace std;

int main() {
  int n=4;
  
  for(int i=0; i<n; i++) {
    for(int j = i+1; j>0; j--) {
      cout<<j<<" ";
    }
    cout<<"\n";
  }

  //reverse triangle pattern using characters 
  //A 
  //B A 
  //C B A 
  //D c B A 

  cout<<"\n";

  for(int i=0; i<n; i++) {
    char ch = 'A'+i;
    for(char c = ch; c>='A'; c--) {
      cout<<c<<" ";
    }
    cout<<"\n";
  }

  return 0;
}
