#include <iostream>
using namespace std;

int main() {
  int n, result = 1;
  cout<<"Enter the number: ";
  cin>>n;
  for (int i=1; i <= n; i++) {
    result *= i;
  }

  cout<<"Factorial of "<<n<<" is: "<<result<<"\n";

  return 0;
}
