#include<bits/stdc++.h>

using namespace std;

#define pb push_back
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vi arr(1);
    cin >> arr[0];
    for(int i = 1; i < n; i++) {
        int g; cin >> g;
        if(g > arr[arr.size()-1]) arr.pb(g);
    }
    cout << arr.size() << endl;
    for(auto i : arr) cout << i << " ";
    cout << endl;
    return 0;
}