#include<bits/stdc++.h>

using namespace std;

typedef vector<long long> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t; cin >> t;
    vi ts(t);
    for(long long i = 0; i < t; i++) cin >> ts[i];
    long long ig; cin >> ig;
    vi igs(ig);
    for(long long i = 0; i < ig; i++) cin >> igs[i];
    long long minPrice = LONG_MAX;
    cin.ignore();
    for(long long i = 0; i < t; i++) {
        long long n2; cin >> n2;
        for(long long j = 0; j < n2; j++) {
            long long curr; cin >> curr;
            minPrice = min(minPrice, ts[i] + igs[curr-1]);
        }
    }
    long long cash; cin >> cash;
    // watch for an edge case where the cheapest drink costs more than he has. (use max(num, 0))
    cout << max((cash/minPrice - 1), 0ll) << endl;
    return 0;
}