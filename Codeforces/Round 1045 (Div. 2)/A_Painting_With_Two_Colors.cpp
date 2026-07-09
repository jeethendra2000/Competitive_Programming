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
        int n, a, b;
        cin >> n >> a >> b;

        int white = min(n-a, n-b), red, blue;

        if(white % 2 == 0){
            // Red Dominant
            if(a > b){
                red = a - b;
                println(red % 2 == 0 ? "YES" : "NO");
            }
            // Blue Dominant
            else{
                blue = n - b;
                println(blue % 2 == 0 ? "YES" : "NO");
            }
        }
        else{
            println("NO");
        }

    }
    return 0;
}