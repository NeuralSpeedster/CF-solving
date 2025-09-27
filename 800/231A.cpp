#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        cin.ignore();
        if (p + v + t > 1) {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}