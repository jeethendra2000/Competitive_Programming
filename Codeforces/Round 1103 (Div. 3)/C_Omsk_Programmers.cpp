#include<iostream>
#include <set>
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

ll costToReach(ll v, ll target, ll x) {
    if (v == target) return 0;
    if (v < target) return target - v;
    
    // v > target, must divide
    ll minCost = LLONG_MAX;
    ll curr = v;
    ll divs = 0;
    
    while (divs <= 50) {
        if (curr >= target) {
            minCost = min(minCost, divs + (curr - target));
        } else {
            minCost = min(minCost, divs + (target - curr));
            break;
        }
        
        if (curr == 0) break;
        curr /= x;
        divs++;
    }
    
    return minCost;
}

int main(){
    fastIO;
    testCases{
        ll a, b, x;
        cin >> a >> b >> x;
        
        // Generate all candidate targets
        set<ll> targets;
        
        ll curr = a;
        while (curr > 0) {
            targets.insert(curr);
            curr /= x;
        }
        targets.insert(0);
        
        curr = b;
        while (curr > 0) {
            targets.insert(curr);
            curr /= x;
        }
        targets.insert(0);
        
        // Find minimum cost
        ll minOps = LLONG_MAX;
        for (ll target : targets) {
            ll costA = costToReach(a, target, x);
            ll costB = costToReach(b, target, x);
            minOps = min(minOps, costA + costB);
        }
        
        println(minOps);
    }
    return 0;
}