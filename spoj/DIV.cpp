#include <iostream>
#include <stdio.h>
using namespace std;
int NUM(int x){
	int count=1;
	for(int i=2;i<=x;){
		int count1=1;
		while(x%i==0){
			x/=i;
			count1++;
		}count*=count1;//cout<<i<<" "<<count1<<" ";
		if(i==2)i=3;
		else i+=2;
	}
	//if(x>1)
	return count;;
}//LOG(N)
bool IsPrime(int x){
	if(x<2)return false;
	if(x==2 || x==3 || x==5)return true;
	if(!(x&1))return false;
	int d=x%30;
	if(!(d==1 || d==7 || d==13 || d==17 || d==19 || d==23 || d==29))return false;
	for(int i=3;(i*i)<=x;i++){
		if(x%i==0)return false;
	}
	return true;

}
bool Check(int x){
	int count=0;
	for(int i=2;i<=x;){
		if(x%i==0){
			if(((x/i)!=i) && IsPrime(x/i) )return true;
			return false;
		}
		if(i==2)i=3;
		else i+=2;
	}
	
}
//LOG(N)
int main(int argc, char const *argv[])
{int count=0;
int count1=0;
int a[354]={50,99,162,208,272,325,388,448,524,578,652,722,788,867,931,1017,1083,1168,1250,1348,1436,1516,1587,1675,1744,1813,1875,1996,2057,2164,2276,2368,2439,2524,2597,2675,2764,2864,2956,3044,3148,3236,3321,3428,3509,3632,3725,3788,3884,3969,4075,4156,4252,4361,4432,4525,4672,4772,4869,4948,5043,5132,5212,5308,5463,5553,5675,5744,5819,5924,5996,6137,6236,6381,6436,6548,6668,6759,6848,6928,7024,7148,7267,7381,7461,7604,7731,7856,7948,8044,8156,8275,8361,8444,8564,8703,8825,8912,8978,9117,9189,9332,9441,9532,9584,9692,9808,9908,10051,10172,10316,10443,10539,10636,10737,10816,10924,11012,11108,11212,11332,11456,11584,11673,11763,11875,12004,12164,12268,12352,12475,12593,12736,12868,12976,13077,13204,13316,13401,13492,13628,13744,13852,13996,14096,14188,14284,14425,14517,14643,14764,14912,15025,15123,15273,15341,15452,15524,15668,15775,15956,16047,16119,16292,16384,16496,16612,16803,16857,16967,17051,17132,17344,17428,17564,17728,17852,17975,18064,18175,18271,18416,18549,18608,18747,18873,18997,19132,19216,19343,19472,19636,19723,19863,19984,20092,20236,20396,20464,20583,20673,20799,20933,21104,21188,21303,21447,21572,21676,21776,21908,22004,22096,22228,22384,22588,22676,22775,22883,22972,23125,23228,23353,23468,23536,23708,23824,23948,24079,24187,24292,24404,24524,24669,24812,24916,25076,25191,25268,25408,25519,25588,25708,25808,25975,26127,26253,26411,26575,26672,26803,26932,27088,27184,27325,27452,27575,27711,27844,27952,28052,28156,28273,28503,28604,28736,28844,28976,29161,29259,29332,29525,29709,29825,29924,30025,30123,30236,30339,30484,30603,30724,30896,31012,31156,31216,31409,31491,31599,31743,31851,31972,32068,32225,32279,32425,32525,32644,32787,32948,33076,33173,33309,33467,33584,33776,33921,34096,34192,34324,34445,34576,34724,34876,35001,35163,35276,35361,35487,35643,35732,35884,36027,36164,36268,36412,36513,36657,36796,36891,37025,37161,37289,37377,37508,37612,37724,37859,37953,38084,38204,38348,38464,38576,38672,38799,38975,39124,39244,39357,39484,39593,39701,39868};
for(int i=0;i<354;i++)cout<<a[i]<<"\n";
	for(int i=2;i<1000000;i++){
		if(Check(NUM(i))){
			count++;
			if(count==9){
				printf("%d\n",i);	
				count=0;count1++;
			}
		}
		//}
	}
	//cout<<count<<"   ";
		//cout<<count1;
	return 0;
}