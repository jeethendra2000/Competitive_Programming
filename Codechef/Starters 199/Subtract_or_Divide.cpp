#include <iostream>
#include <unordered_set>
#include <stack>
using namespace std;

int countDistinct(int n) {
    unordered_set<int> visited;
    stack<int> stk;
    stk.push(n);

    while (!stk.empty()) {
        int curr = stk.top();
        stk.pop();

        // Skip if already visited or non-positive
        if (curr <= 0 || visited.count(curr)) continue;

        visited.insert(curr);

        // Operation 1: Subtract 2 (if > 2)
        if (curr > 2) {
            stk.push(curr - 2);
        }

        // Operation 2: Divide by 2 (if even and > 1)
        if (curr > 1 && curr % 2 == 0) {
            stk.push(curr / 2);
        }
    }

    return visited.size();
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << countDistinct(N) << endl;
    }

    return 0;
}
