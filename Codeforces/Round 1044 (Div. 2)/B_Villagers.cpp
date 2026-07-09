#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define newLine cout << "\n"
#define println(a) cout << (a) << "\n"
#define testCases int t; cin >> t; while(t--)
#define debug(a) cout << #a << " = " << a << "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;
#define iofiles freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)

const ll MOD = 1e9 + 7;


int main(){
    fastIO;
    testCases{
        int n;
        cin >> n;
        
        vecin(grumpiness, n);

        sort(grumpiness.begin(), grumpiness.end(), greater<int>());

        ll int emeralds = 0;

        for(int i = 0; i < n-1; i+=2)
            emeralds += max(grumpiness[i], grumpiness[i+1]);
        
        if(n%2)
            emeralds += grumpiness[n-1];

        cout << emeralds << endl;
    }
    return 0;
}