#include <iostream>
#include <string>
using namespace std;

bool isAlpha(const string &s) {
    for (char c : s) {
        if (!isalpha(static_cast<unsigned char>(c))) {
            return false;
        }
    }
    return !s.empty();
}

int main() {
    // Test cases
    cout << boolalpha; // To print true/false instead of 1/0
    cout << "Test 'Hello': " << isAlpha("Hello") << endl;        // True
    cout << "Test 'Hello123': " << isAlpha("Hello123") << endl;  // False
    cout << "Test '': " << isAlpha("") << endl;                  // False
    cout << "Test 'Test': " << isAlpha("Test") << endl;          // True
    cout << "Test 'Test!': " << isAlpha("Test!") << endl;        // False

    return 0;
}
