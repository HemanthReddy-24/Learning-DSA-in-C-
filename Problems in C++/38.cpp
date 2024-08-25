#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string binaryNumber = "";
    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        int remainder = n % 2;
        binaryNumber = to_string(remainder) + binaryNumber;
        n /= 2;
    }
    if (binaryNumber.empty()) {
        binaryNumber = "0";
    }
    cout << "Binary equivalent: " << binaryNumber << std::endl;

    return 0;
}
