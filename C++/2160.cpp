#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    if (text.length() <= 80) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
