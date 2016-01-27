#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef struct nd_
{
	long long int mod;
	long long int ndig;
}nd;
vector<nd> segtree;
vector<string> d;
vector<long long int> powt;
nd construct(int s, int e, int i)
{
	if(s==e)
	{
		segtree[i].mod=stoll(d[s])%M;
		segtree[i].ndig=d[s].size();
		return segtree[i];
	}
	nd l,r;
	int mid=(s+e)/2;
	l=construct(s,mid,2*i+1);
	r=construct(mid+1,e,2*i+2);
	segtree[i].mod=((l.mod*powt[r.ndig])%M+r.mod)%M;
	segtree[i].ndig=l.ndig+r.ndig;
	return segtree[i];
}
nd update(int s, int e, int i,int x,string y)
{
	nd l,r;
	nd temp;
	if(x>e||x<s)
	{
		return segtree[i];
	}
	if(s==e)
	{
		if(s==x)
		{
			d[x]=y;
			segtree[i].mod=stoll(y)%M;
			segtree[i].ndig=y.size();
			return segtree[i];
		}
	}
	int mid=(s+e)/2;
	l=update(s,mid,2*i+1,x,y);
	r=update(mid+1,e,2*i+2,x,y);
	segtree[i].mod=((l.mod*powt[r.ndig])%M+r.mod)%M;
	segtree[i].ndig=l.ndig+r.ndig;
	return segtree[i];
}
nd m(int s, int e, int i, int x, int y)
{
	if(x>e||y<s)
	{
		nd temp;
		temp.ndig=0;
		temp.mod=0;
		return temp;
	}
	else if(x<=s&&y>=e)
	{
		return segtree[i];
	}
	int mid=(s+e)/2;
	nd l=m(s,mid,2*i+1,x,y);
	nd r=m(mid+1,e,2*i+2,x,y);
	nd ret;
	ret.mod=((l.mod*powt[r.ndig])%M+r.mod)%M;
	ret.ndig=l.ndig+r.ndig;

	return ret;
}
int main()
{
	int n,x,y,q,ch;
	nd temp;
	string p;
	cin>>n;
	d=vector<string>(n);
	segtree=vector<nd>(4*n);
	powt=vector<long long int>(20*n);
	powt[0]=1;
	for(int i=1;i<=18*n;i++)
	{
		powt[i]=(powt[i-1]*10)%M;
	}
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
	}
	construct(0,n-1,0);
	cin>>q;
	while(q--)
	{
		cin>>ch;
		if(ch==1)
		{
			cin>>x>>p;
			x--;
			update(0,n-1,0,x,p);
		}
		else
		{
			cin>>x>>y;
			x--;
			y--;
			temp=m(0,n-1,0,x,y);
			cout<<temp.mod<<endl;
		}
	}
	return 0;
}