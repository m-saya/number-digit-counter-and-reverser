#include <iostream>
using namespace std;

// Function to count digits of a number
int Count(int num) {
    int counter = 0;

    if (num == 0) return 1;   // Zero has 1 digit
    if (num < 0) num = -num;  // Make number positive

    while (num != 0) {
        num /= 10;
        counter++;
    }

    return counter;
}

int main() {
    int num, reversed = 0, removed;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Digit count: " << Count(num) << endl;

    int temp = num;  // Preserve original number for reversal

    while (temp != 0) {
        removed = temp % 10;
        reversed = reversed * 10 + removed;
        temp /= 10;
    }

    cout << "Reversed: " << reversed << endl;

    return 0;
}
