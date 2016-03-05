#include <bits/stdc++.h>
using namespace std;

long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main(int argc, char const *argv[])
{
	 long long n;
	cin>>n;
	cout<<(long long)(9*n-3)*pow(4,n-3);

	return 0;
}