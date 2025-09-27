#include <bits/stdc++.h>

using namespace std;

int main() {
    short w;
    cin >> w;
    if ((w & 1) || w == 2) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}