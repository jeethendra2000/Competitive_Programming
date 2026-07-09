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

        bool flag = true;
        for(int i = 0; i < n; i++){
            int count = 0;

            while(i < n && s[i] == '1'){
                count++;
                i++;
            }

            if(count > 0 && count < 3){
                flag = false;
                break;
            }

        }

        println(flag ? "Yes" : "No");
    }
    return 0;
}