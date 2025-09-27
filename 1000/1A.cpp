#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    int cn = 1 + n / a;
    int cm = 1 + m / a;
    cout << cn * cm << endl;
    return 0;
}
