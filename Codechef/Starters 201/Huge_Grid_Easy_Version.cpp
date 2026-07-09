#include<iostream>
using namespace std;
#define ll long long
#define ld long double
#define newLine cout << "\n"
#define println(a) cout << (a) << "\n"
#define testCases int t; cin >> t; while(t--)
#define debug(a) cout << #a << " = " << a << "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define iofiles freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << " "; cout << endl;

const ll MOD = 1e9 + 7;


int main(){
    fastIO;
    testCases{
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cost = 0;
        for(int i = 0; i < n; i++){
            cost += (s[i]-'0');
        }
        for(int i = 0; i < n-1; i++){
            cost += ((s[i]-'0') + (s[i+1]-'0'));
        }

        println(cost);

    }
    return 0;
}