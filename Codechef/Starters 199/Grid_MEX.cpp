#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<vector<int>> A(N, vector<int>(N));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                A[i][j] = (i + j) % N;
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
