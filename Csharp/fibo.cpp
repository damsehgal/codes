#include<iostream>
using namespace std;
int fibo(int x){
if(x==1||x==2) return 1;
else if(f[x]!=0)return f[x];
else return (f[x]=fibo(x-1)+fibo(x-2));
}
main{}
