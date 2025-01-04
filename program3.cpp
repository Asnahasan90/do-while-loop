#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    do {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    } while (num != 0);

    cout << "Reversed number is: " << reverse << endl;

    return 0;
}
