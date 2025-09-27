#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    int x = 0;
    while (n--) {
        string s;
        getline(cin, s);
        if (s.find('+') != string::npos) x++;
        else x--;
    }
    cout<<x;
    return 0;
}