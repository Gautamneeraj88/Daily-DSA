#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    // way 1
    // for (int i = 1; i <= n; i++) {
    //    if(i % 2 == 0) {
    //        sum += i;
    //    }
    // }

    // way 2
    for (int i =2; i<= n; i+=2){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
