#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<char> s;
    string a; cin >> a;
    for(char c : a) {
        if(c == '<') s.pop_back();
        else s.push_back(c);
    }
    while(!s.empty()) {
        cout << s.front();
        s.pop_front();
    }
    cout << endl;
    return 0;
}