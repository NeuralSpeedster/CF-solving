#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        int p = s[0] - '0';
        int v = s[2] - '0';
        int t = s[4] - '0';
        if (p + v + t > 1) {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}