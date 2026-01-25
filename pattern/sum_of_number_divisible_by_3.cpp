#include <iostream>
using namespace std;

int main() {
  int range, sum = 0;
  cout<<"Enter the range: ";
  cin>>range;

  for(int i = 1; i<=range; i++) {
    if( i % 3 == 0) {
      sum += i;
    }
  }

  cout<<"Sum of all number from 1 to "<<range<<" which are divisible by 3 is: "<<sum<<"\n";
  return 0;
}
