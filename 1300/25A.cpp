#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int set_bits = 0;
    vector<int> a(n);
    for (int& x: a) {
        cin >> x;
        if (x & 1) set_bits++;
    }

    int target = set_bits > 1 ? 0 : 1;
    for (int i = 0; i < n; i++) {
        if ((a[i] & 1) == target) {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}