#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }

        for(int k=1; k<=i+1; k++) {
            cout<<k;
        }

        for(int z=i; z>=1; z--) {
            cout<<z;
        }
        cout<<"\n";
    }

    return 0;
}