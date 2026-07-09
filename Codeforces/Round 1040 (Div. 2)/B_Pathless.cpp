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
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        int count[3] = {0, 0, 0};
        int sm = 0;
        for(auto &it: arr){
            cin >> it;
            sm += it;
            count[it]++;
        }

        // Edge case : 1 
        // When alice target is less than actual minimum sum required to reach end
        if(sm > s){
            // Then any arrangement is ok
            for(auto it: arr) cout << it << " ";
        }
        else if(s-sm == 1){
            for(int i = 0; i < count[0]; i++)
                cout << 0 << " ";
            for(int i = 0; i < count[2]; i++)
                cout << 2 << " ";
            for(int i = 0; i < count[1]; i++)
                cout << 1 << " ";
        }
        else{
            cout << -1;
        }

        newLine;


    }
    return 0;
}