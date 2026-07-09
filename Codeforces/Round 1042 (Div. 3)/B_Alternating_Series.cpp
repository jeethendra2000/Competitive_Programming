#include<iostream>
#include<vector>
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

        for(int i = 0; i < n -1; i++){
            if(i & 1){
                cout << 3 << " ";
            }
            else{
                cout << -1 << " ";
            }
        }
        cout << (n & 1 ? -1 : 2);
        
        newLine;
    }
    return 0;
}