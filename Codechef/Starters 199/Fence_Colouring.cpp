#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

#define ll long long
#define testCases int t; cin >> t; while(t--)
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    fastIO;
    testCases {
        int n;
        cin >> n;
        vector<int> A(n);
        unordered_map<int, int> freq;

        int mismatches = 0;

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
            freq[A[i]]++;
            if (A[i] != 1) mismatches++; // fences that need to change from initial colour 1
        }

        int minTime = mismatches; // Option 1: paint mismatched fences individually

        for (auto it : freq) {
            int count = it.second;
            int time = 1 + (n - count); // Option 2: paint all with this colour, then fix the rest
            minTime = min(minTime, time);
        }

        cout << minTime << '\n';
    }
    return 0;
}
