#include<iostream>
#include<cmath>
using namespace std;
bool C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
        if(ans>=1000000)return true;
    }
     if(ans>=1000000)return true;
    return false;
}


int main(int argc, char const *argv[])
{int count=0;
	for(int n=1;n<=100;n++){
		for(int r=1;r<=n;r++){
			if(C(n,r))count++;
		}
	}
	cout<<count;

	//cout<<C(23,10);
	return 0;
}