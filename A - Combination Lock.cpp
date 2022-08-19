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
const int N = 2e4 + 7;
const int bigN = 1e9 + 5;
ll mod = 1e9 + 7;
int arr[N], temp[N], arr1[N];
int matrix[101][101], matrix2[100][100], matrix3[100][100];
bool boolArr[N];

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    init();
    int n;
    string s1, s2;
    char a, b;
    int cnt = 0;
    cin >> n >> s1 >> s2;
    loop(i, n) {
        a = s1[i], b = s2[i];
        int numa = (a - '0'), numb = (b - '0');
        int forward = abs(numa-numb);
        int backward = 0;

        if(numa < numb){
            backward = numa;
            backward += (9-numb);
            backward++;
        }else {
            backward = 9 - numa;
            backward+=numb;
            backward++;
        }

        if(backward < forward)cnt += backward;
        else cnt += forward;

    }
    cout << cnt;

    return 0;
}
















