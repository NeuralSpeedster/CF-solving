#include <bits/stdc++.h>

using namespace std;

int main() {
    size_t n, m, a;
    cin >> n >> m >> a;
    size_t cn = n / a;
    size_t cm  = m / a;
    if (n % a) cn++;
    if (m % a) cm++;
    cout << cn * cm << endl;
    return 0;
}
