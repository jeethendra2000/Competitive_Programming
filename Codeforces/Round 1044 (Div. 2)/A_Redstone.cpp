#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
#define ll long long
#define ld long double
#define newLine cout << "\n"
#define println(a) cout << (a) << "\n"
#define testCases int t; cin >> t; while(t--)
#define debug(a) cout << #a << " = " << a << "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define iofiles freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)

const ll MOD = 1e9 + 7;


int main(){
    fastIO;
    testCases{
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> count;

        for(auto &it: arr) {
            cin >> it;
            count[it]++;
        }
        bool flag = 0;

        for(auto it: count){
            if(it.second > 1){
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES": "NO") << endl;
    }
    return 0;
}