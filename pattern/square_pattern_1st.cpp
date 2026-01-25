#include <iostream>
using namespace std;

int main() {
  int n = 4;
 
  // print number pattern
  //outer loop pring the rows
  for (int i = 1; i<=n; i++){
    //inner loop print the content in rows (columns)
    for (int j=1; j<=n; j++) {
      cout<<j<<" ";
    }
    cout<<"\n";
  }


  //print start pattern
  cout<<"\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout<<"* ";
    }
    cout<<"\n";
  }

  //print Character pattern
  cout<<"\n";
  for(int i=0; i<n; i++) {
    char ch = 'A';
    for (int j=0; j<n; j++) {
      cout<<ch<<" ";
      ch += 1;
    }
    cout<<"\n";
  }

  return 0;
}
