#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        long long base = a[0];
        vector<long long> result(n);

        for (int i = 0; i < n; ++i) {
            // Find how much to add to make a[i] ≡ base mod k
            long long rem = (base - a[i]) % k;
            if (rem < 0) rem += k; // Ensure positive
            result[i] = a[i] + rem;
        }

        for (int i = 0; i < n; ++i)
            cout << result[i] << " ";
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
