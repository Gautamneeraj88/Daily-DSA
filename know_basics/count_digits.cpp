#include <iostream>
using namespace std;

void countDigits(int number) {
    if (!number) return ; // Special case for 0
    int count = 0;
    while (number > 0){
        count += 1;
        number /= 10;
    }
    cout << "Total digits: " << count << endl;
}

void countDigitLogBase10(int number) {
    if (!number) return ; // Special case for 0
    int count = (int)log10(number)+1;
    cout << "Total digits (using log10): " << count << endl;
}


int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    countDigits(number);
    countDigitLogBase10(number);

    return 0;
}
