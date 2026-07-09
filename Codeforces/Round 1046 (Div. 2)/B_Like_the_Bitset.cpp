#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int count_ones = 0;
        for (char c : s) {
            if (c == '1') count_ones++;
        }

        int max_ones_allowed = n - (k - 1);

        if (count_ones > max_ones_allowed) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        vector<int> p(n);
        int current_value = n;

        // First assign largest values to '0' positions
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                p[i] = current_value--;
            }
        }

        // Then assign remaining values to '1' positions
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                p[i] = current_value--;
            }
        }

        // Output the permutation
        for (int i = 0; i < n; ++i) {
            cout << p[i] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
