#include <iostream>
using namespace std;

int main() {
  int n = 4;

  for(int i=0; i<n; i++) {
    for(int j=n-i; j>0; j--) {
      cout<<(i+1)<<" ";
    }
    cout<<"\n";
  }

  //inverted trianle pattern 
  //1 1 1 1 
  //  2 2 2 
  //    3 3 
  //      4 

  cout<<"\n";
  for(int i=0; i<n; i++) {
    //printing spaces
    for(int j=0; j<i; j++) {
      cout<<" ";
    }

    //printing numbers
    for(int k=0; k<n-i; k++) {
      cout<<(i+1);
    }

    cout<<"\n";
  }

  //inverted trianlge pattern using characters
  //A A A A 
  //  B B B 
  //    C C 
  //      D

  cout<<"\n";
  for(int i=0; i<n; i++) {
    for(int j=0; j<i; j++) {
      cout<<" ";
    }

    for(int k=0; k<n-i; k++) {
      char ch = 'A' + i;
      cout<<ch;
    }
    cout<<"\n";
  }

  return 0;
}
