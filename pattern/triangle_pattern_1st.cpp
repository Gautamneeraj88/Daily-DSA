#include <iostream>
using namespace std;

int main() {
  int n = 4;

  // triangle pattern using starts
  for (int i = 0; i<n; i++){
    for (int j = 0; j<i+1; j++) {
      cout<<"* ";
    }
    cout<<endl;
  }

  //tringle pattern using numbers
  //1 
  //2 2 
  //3 3 3
  //4 4 4 4
  
  cout<<"\n";
  for (int i =0; i<n; i++) {
    //int num = i + 1;
    for(int j=0; j<i+1; j++) {
      //cout<<num<<" ";
      cout<<(i+1)<<" ";
    }
    cout<<"\n";
  }

  //traingle pattern using characters
  //A 
  //B B 
  //C C C 
  //D D D D 
  
  cout<<"\n";
  for(int i = 0; i<n; i++) {
    char ch = 'A';
    ch = ch + i;
    for(int j=0; j<i+1; j++) {
      cout<<ch<<" ";
    }
    cout<<"\n";
  }

  //traingle pattern using numbers increment order
  //1 
  //1 2 
  //1 2 3 
  //1 2 3 4
  
  cout<<"\n";
  for(int i =0; i<n; i++) {
    //int num = 1;
    //for(int j=0; j<i+1; j++){
      //cout<< num << " ";
      //num++;
      for (int j=1; j<=i+1; j++) {
        cout<<j<<" ";
    }
    cout<<"\n";
  }

  //trianle pattern using characters increment order
  //A 
  //B C 
  //D E F 
  //G H I J 

  cout<<"\n";
  char ch = 'A';

  for(int i=0; i<n; i++) {
    for(int j=0; j<i+1; j++) {
      cout<<ch<<" ";
      ch = ch + 1;
    }
    cout<<"\n";
  }
  

  return 0;
}
