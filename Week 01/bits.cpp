#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string a; cin >> a;
        int most = 0;
        // Note:
        //  - __builtin_popcount(int x) returns the number of 1's in the binary representation of x
        //  - stoi(string s) returns an integer representation of string s
        for(int i = 0; i < a.length(); i++)
            most = max(__builtin_popcount (stoi(a.substr(0, i+1))), most);
        cout << most << endl;
    }
    return 0;
}