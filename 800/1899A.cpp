#include <bits/stdc++.h>

using namespace std;

int main() {
    short t;
    cin>>t;
    for (short i = 0; i < t; i++) {
        short n;
        cin >> n;
        if (n % 3 == 0) {
            cout << "Second" << endl;
        }
        else {
            cout << "First" << endl;
        }
    }
    return 0;
}