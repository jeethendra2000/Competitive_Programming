#include<iostream>
#include<algorithm>
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
        ll int c;
        cin >> n >> c;
        vector<int> arr(n);

        for(auto &it: arr)
            cin >> it;

        // sort
        sort(arr.begin(), arr.end(), greater<int>());

        int coins = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] > c){
                coins++;
            }
            else{
                for(int j = i+1; j < n; j++){
                    arr[j] *= 2;
                }
            }
        }

        
        cout << coins << endl;
        
    }

    return 0;
}