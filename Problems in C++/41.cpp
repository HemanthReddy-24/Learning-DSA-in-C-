#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string OctalNumber = "";
    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        int remainder = n % 8;
        OctalNumber = to_string(remainder) + OctalNumber;
        n /= 8;
    }
    if (OctalNumber.empty()) {
        OctalNumber = "0";
    }
    cout << "Octal equivalent: " << OctalNumber << std::endl;

    return 0;
}
