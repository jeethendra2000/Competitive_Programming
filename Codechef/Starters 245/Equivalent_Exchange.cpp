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
        int n, k;
        cin >> n >> k;
        vecin(arr, n);

        bool isPossible = false;
        for(int x = 0; x <= k; x++){
            int r = x;
            int b = k - x;

            bool flag = true;

            for(auto it: arr){
                // give red stones and wants blue stones
            
                b -= it;
                r += it;

                if(r < 0 || b < 0){
                    flag = false;
                    break;
                }

            }

            if(flag)
                isPossible = true;
            
        }
            
        cout << (isPossible ? "Yes": "No") << '\n';

    }
    return 0;
}