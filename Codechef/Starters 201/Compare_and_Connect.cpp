#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;

        // Min-heap using strings
        priority_queue<string, vector<string>, greater<string>> pq;

        // Insert N "<" and M ">"
        for (int i = 0; i < N; ++i) pq.push("<");
        for (int i = 0; i < M; ++i) pq.push(">");

        // Combine until one string remains
        while (pq.size() > 1) {
            string a = pq.top(); pq.pop();
            string b = pq.top(); pq.pop();

            string combined;
            if (a < b) combined = a + "<" + b;
            else if (a == b) combined = a + "=" + b;
            else combined = a + ">" + b;

            pq.push(combined);
        }

        cout << pq.top() << '\n';
    }

    return 0;
}
