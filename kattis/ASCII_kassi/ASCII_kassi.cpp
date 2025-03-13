#include <iostream>
using namespace std;

int n;
int i;
int j;
int l;

int main() {
    
    // cout << "Type size of square \n";
    cin >> n;
    
    // Top part of square
    cout << '+';
    for (l = 0; l < n; l++) {
        cout << '-';
    }
    cout << '+' << '\n';

    // Middle part of square
    for (i = 0; i < n; i++) {
        cout << '|';
        for (j = 0; j < n; j++) {
            cout << ' ';
        }
        cout << '|' << '\n';
    }

    // Bottom part of square
    cout << '+';
    for (l = 0; l < n; l++) {
        cout << '-';
    }
    cout << '+' << '\n';
    return 0;
}

