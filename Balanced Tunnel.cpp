#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define loop2(i, a, b) for(int i = a; i <= b; i++)
#define pb                    push_back
#define test int t; cin>> t; while(t--)
const int N = 1e5 + 7;
const int bigN = 1e9 + 5;
ll mod = 1e9 + 7;
ll arr[N], temp[N], arr1[N];
int matrix[100][100], matrix2[100][100], matrix3[100][100];
bool boolArr[N];

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    init();
    int n, carId, fined = 0, pos = 0, exitPos = 0;
    vi enteredCars, exitCars;
    vector<bool> finedCars(n + 1);
    cin >> n;
    loop(i, n)cin >> carId, enteredCars.push_back(carId);
    loop(i, n)cin >> carId, exitCars.push_back(carId);
    while (pos != n - 1) {
        if (enteredCars[pos] == exitCars[exitPos]) {
            pos++;
            exitPos++;
        } else if (finedCars[enteredCars[pos]]) pos++;
        else fined++, finedCars[exitCars[exitPos]] = true, exitPos++;
    }
    cout << fined;
    return 0;
}














 