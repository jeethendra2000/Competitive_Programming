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

        vector<int> a(n), b(n);

        for(auto &it: a) cin >> it;
        for(auto &it : b) cin >> it;

        int iteration = 1;
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                iteration += (a[i] - b[i]);
            }
        }
        println(iteration);

    }
    return 0;
}