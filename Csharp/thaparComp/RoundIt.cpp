/*
Most of the time when rounding a given number, it is customary to round to some multiple of a power of 10. However, there is no reason why we cannot use another multiple to do our rounding to. For example, you could round to the nearest multiple of 7, or the nearest multiple of 3.
Given an integer N and an integer B, round N to the nearest value which is a multiple of B. If N is exactly halfway between two multiples of B, return the larger value
*/
#include <iostream>
using namespace std;
int round(int n, int b){
        if(n % b >= b/2.0){
            return n/b*b+b;
        }
        return n/b*b;
    }
int main()
{
    int t,j,k;
    cin>>t;
    while(t--){cin>>j>>k;
    	cout<<round(j,k)<<endl;}
    return 0;
}


