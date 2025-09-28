#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    unordered_map<string, int> db;
    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        if (db.find(name) == db.end()) {
            db.emplace(pair<string, int>(name, 0));
            cout << "OK" << endl;
        } else {
            db[name]++;
            cout<<name<<db[name]<<endl;
        }
    }
    return 0;
}
