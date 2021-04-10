#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (ll (i) = 0; (i)<(n); (i)++)

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

const int N = 1e6 + 7;
int mod = 1e9;
int arr[N];
int arr2[101][101];

int main() {
    init();
    char axis[400][400];
    int t, n;
    cin>>t;
    while (t--) {
        pair<int, int> c1 = {0, 0}, c2 = {0, 0};
        cin >> n;
        loop(i, n)loop(j, n) {
                cin >> axis[i][j];
                pair<int, int> x = {0, 0};
                if (axis[i][j] == '*' && c1 == x)c1 = {i, j};
                else if (axis[i][j] == '*' && c2 == x)c2 = {i, j};
            }

            if(c1.second == c2.second){
                if(c1.second > 0){
                    axis[c1.first][c1.second-1] = '*';
                    axis[c2.first][c2.second-1] = '*';
                }else
                {
                    axis[c1.first][c1.second+1] = '*';
                    axis[c2.first][c2.second+1] = '*';
                }
            }else if(c1.first == c2.first){
                if(c1.first > 0){
                    axis[c1.first-1][c1.second] = '*';
                    axis[c2.first-1][c2.second] = '*';
                }else
                {
                    axis[c1.first+1][c1.second] = '*';
                    axis[c2.first+1][c2.second] = '*';
                }
            }else{

                axis[c1.first][c2.second] = '*';
                axis[c2.first][c1.second] = '*';
            }
        loop(i, n){
            loop(j, n) cout<<axis[i][j];
                cout<<endl;
            }

    }

    return 0;
}
