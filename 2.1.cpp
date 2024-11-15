#include <iostream>
using namespace std;

int main21() {
    char c;
    cin >> c;
    if (islower(c)) {
        cout << (char)toupper(c);
    }
    else {
        cout << (int)(c + 1);
    }
    return 0;
}