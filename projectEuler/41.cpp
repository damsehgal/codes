#include<iostream>

using namespace std;
     bool IsPandigital(long long int n)
    {
        int digits = 0; int count = 0; int tmp;

        for (; n > 0; n /= 10, ++count)
        {
            if ((tmp = digits) == (digits |= 1 << (n - ((n / 10) * 10) - 1)))
                return false;
        }

        return digits == (1 << count) - 1;
    }
   bool check(long long int i){
	if(i<=2)return false;
	if(i==2||i==3)return true;
	if(!(i&1))return false;
	if(!(i%6==1||i%6==5))return false;
	for(int x=3;(x*x)<=i;x++){
		if(i%x==0)return false;
	}
	return true;
}


int main(int argc, char const *argv[])
{
	/* code */
	for(long long int i=0;i<=987654321;i++){
		if(IsPandigital(i)){if(check(i))cout<<i<<endl;}}
	return 0;
}