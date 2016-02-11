#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
struct XY{
        float x;
        float y;
};
float f(float p,vector<XY>& v){
        float sum=0;
        for(int i=0;i<v.size();i++){
                float pro=v[i].y;
                for(int j=0;j<v.size();j++)
                {
                        if(j!=i)pro*=((p-v[j].x)/(v[i].x-v[j].x));

                }
                sum+=pro;

        }
        return sum;
}


int main(){
        int n;
        cin>>n;
        vector<XY>v(n);
        for(int i=0;i<n;i++)
                cin>>v[i].x>>v[i].y;
        float p;
        cin>>p;
        cout<<f(p,v);
        return 0;
}