/*Ravi was a self proclaimed genius in his class. His teacher decided to test his knowledge. 
She asked Ravi to count the number of ways in which he can cover a distance d units. 
She gave a few restrictions based on which he had to answer. He can take atmost 3 steps at a time (each step being 1 unit).*/


#include <iostream>

using namespace std;
long long int def[100];//no need for 1000 even long long int can work only for 80  

//def[0]=0;
long long int abc(long long int x)
{
    if (x==0) return 0;
    else if(x==1) return 1;
        else if(x==2) return 2;
        else if(x==3) return 4;
        if(def[x]==0)
         return(def[x]=abc(x-1)+abc(x-2)+ abc(x-3));
        else return def[x];
        
}
 int main() {
    /* Enter your code here. Read input from STDIN. Prlong long int output to STDOUT */   
    long long int t;
    cin>>t;
    long long int d[t];
    for(long long int i=0;i<100;i++){def[i]=0;}
    def[1]=1;def[2]=2;def[3]=4;
    for(long long int i=0;i<t;i++){
        cin>>d[i];
        d[i]=abc(d[i]);
        cout<<d[i]<<endl;
    }
    
    return 0;
}
