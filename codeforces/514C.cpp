#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <stack>
#include <iomanip>

#define FOR(i,x,y) for(int i =(int)(x); i<(int)(y); i++)
#define REP(i, N) FOR(i, 0, N)
#define SZ(x) (int)x.size()
#define BASE 137
#define MOD 1000000007

using namespace std;

typedef vector<int> vin;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvin;
typedef unsigned long long ULL;
typedef long long LL;

const int maxn = 1000000;
map<ULL, string> vals;
ULL powers[maxn];

int n, m;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    powers[0] = 1;
    REP (i, maxn-1) {
        powers[i+1] = BASE*powers[i];
    }

    cin >> n >> m;
    REP (i, n) {
        ULL hash = 0;
        string s; cin >> s;
        REP (j, SZ(s)) hash += powers[j]*((int)s[j]);
        vals[hash] = s;
    }

    REP (i, m) {
        ULL hash = 0;
        string s; cin >> s;
        REP (j, SZ(s)) hash += powers[j]*((int)s[j]);

        bool found = false;
        REP (j, SZ(s)) {
            ULL chash = hash - powers[j]*((int)s[j]);
            REP (k, 3) {
                char c = 'a' + k;
                if (c == s[j]) continue;
                ULL hv = powers[j]*((int) c);
                if (vals.find(chash+hv) != vals.end()) {
                    string ss = vals[chash+hv];
                    int diff = 0;
                    REP (z, SZ(ss)) {
                        if (ss[z] != s[z]) diff++;
                    }
                    if (diff == 1) {
                        found=true;
                        break;
                    }
                }
            }
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}