#include <bits/stdc++.h>
using namespace std;
long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        
        ans /= i;
        ans=ans%1000000000;
    }

    return ans;
}
void PAscal(int x){
    int i;

	for( i = 0; i < x; i++){
			long long int h=C(x,i);
			cout<<h<<" ";
	}
	
	cout<<"\n";
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){int x;
		cin>>x;
		PAscal(x);
	}
	return 0;
}