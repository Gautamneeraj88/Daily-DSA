#include <iostream>
using namespace std;

int main() {
    int m = 10, n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
