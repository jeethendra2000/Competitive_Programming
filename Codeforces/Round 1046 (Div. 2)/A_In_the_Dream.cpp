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

bool checkDream(int a, int b){
    int leadTeam = max(a, b);
    int lagTeam = min(a, b);

    int minimumGoalsRequired = (leadTeam+1)/2-1;
    
    return lagTeam >= minimumGoalsRequired;
}

int main(){
    fastIO;
    testCases{
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        println(checkDream(a, b) && checkDream(c-a, d-b)? "YES" : "NO");
    }
    return 0;
}