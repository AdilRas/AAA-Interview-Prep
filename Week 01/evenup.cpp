#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    stack<int> stk;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(stk.empty()) stk.push(a);
        else {
            int b = stk.top(); stk.pop();
            if((a+b)%2 != 0) {
                stk.push(b); stk.push(a);
            } 
        }
    }
    cout << stk.size() << endl;
    return 0;
}