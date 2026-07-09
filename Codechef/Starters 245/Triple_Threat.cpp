#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {

        int N, X;
        cin >> N >> X;

        vector<int> ones(N, 0);

        int rem = X;

        for (int i = 0; i < N; i++) {

            int colsLeft = N - i - 1;

            // Can this column remain majority 0?
            // Then later columns can still accommodate all remaining ones.
            if (rem <= 1 + 3 * colsLeft) {
                ones[i] = min(1, rem);
                rem -= ones[i];
            }
            else {
                ones[i] = 2;
                rem -= 2;
            }
        }

        // Put any remaining ones (0 or 1) into majority-1 columns.
        for (int i = N - 1; i >= 0 && rem > 0; i--) {
            if (ones[i] == 2) {
                ones[i]++;
                rem--;
            }
        }

        string A(3 * N, '0');

        for (int i = 0; i < N; i++) {
            if (ones[i] >= 1)
                A[i] = '1';
            if (ones[i] >= 2)
                A[i + N] = '1';
            if (ones[i] == 3)
                A[i + 2 * N] = '1';
        }

        cout << A << '\n';
    }

    return 0;
}