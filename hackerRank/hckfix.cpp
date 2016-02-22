#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c,d,e,f;
 cin>>a>>b>>c>>d>>e>>f;
 int cycle1=a+b+c+d,x2=a+d+e,x3=b+f+a;
 std::vector<int> v(6,-1);
 for(int I=0;I<200;I++)
 {
  if(cycle1+I>=0 && x2+I>=0 && x3+I>=0)
  {
   v[0]=I;
   break;
  }
 }
 for(int I=0;I<200;I++)
 {
  if(cycle1+I>=0 && x3+I>=0 && x2>=0)
  {
   v[1]=I;
   break;
  }
 }
 for(int I=0;I<200;I++)
 {
  if(cycle1+I>=0 && x3>=0 && x2>=0)
  {
   v[2]=I;
   break;
  }
 }
 for(int I=0;I<200;I++)
 {
  if(cycle1+I>=0 && x3>=0 && x2+I>=0)
  {
   v[3]=I;
   break;
  }
 }
 for(int I=0;I<200;I++)
 {
  if(cycle1>=0 && x3>=0 && x2+I>=0)
  {
   v[4]=I;
   break;
  }
 }
 for(int I=0;I<200;I++)
 {
  if(cycle1>=0 && x3+I>=0 && x2>=0)
  {
   v[5]=I;
   break;
  }
 }
 int MIN=(int)1e9;
 for(int i=0;i<6;i++)
  if(v[i]<MIN && v[i]>=0)MIN=v[i];
  if(MIN==(int)1e9)cout<<-1;
  else cout<<MIN;
 return 0;
}