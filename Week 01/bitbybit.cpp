#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> bits;
    while(cin >> n && n != 0) {
        bits = vector<int>(32, -1);
        for(int j = 0; j < n; j++) {
            string op; int bit;
            cin >> op >> bit;
            if(op == "SET") {
                bits[bit] = 1;
            } else if(op == "CLEAR") {
                bits[bit] = 0;
            } else {
                int bit2; cin >> bit2;
                if(op == "AND") {
                    if(bits[bit2] == 0 || bits[bit] == 0) bits[bit] = 0;
                    else if(bits[bit2] == 1 && bits[bit] == 1) bits[bit] = 1;
                    else bits[bit] = -1;
                } else if(op == "OR") {
                    if(bits[bit] == 1 || bits[bit2] == 1) bits[bit] = 1;
                    else if(bits[bit] == 0 && bits[bit2] == 0) bits[bit] = 0;
                    else bits[bit] = -1;
                }
            }
        }
        for(int i = 31; i >= 0; i--) {
            if(bits[i] > -1) {
                std::cout << (bits[i]);
            } else {
                std::cout << "?";
            }
        }
        std::cout << endl;
    }
    return 0;
}