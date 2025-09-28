#include <bits/stdc++.h>

using namespace std;

void print_even(const int& n, const string& s) {
    for (int i = 0; i < n; i += 2) {
        cout<<s[i]<<s[i+1];
        if (i != n - 2) { // если не предпоследний
            cout<<"-";
        }
    }
}


int main() {
    int n;
    cin >> n;
    cin.ignore();

    string s;
    cin>>s;
    cin.ignore();

    if (n & 1) {
        cout<<s.substr(0, 3);
        if (n > 3) {
            cout<<"-";
            print_even(n-3, s.substr(3, n-3));
        }

    } else {
        print_even(n, s);
    }
    return 0;
}