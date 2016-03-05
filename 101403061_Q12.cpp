/*101403061
Dhruv
COE3
Q12*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
template<class t> 
class Stack 
{ 
public: 
    t *a; 
    int top,i,size; 
    Stack(int siz) 
    { 
        a=new t[siz]; 
        size=siz; 
        top=-1; 
    } 
                        
    void push(t ele) 
    { 
        if(top!=size-1){a[++top]=ele;} 
    } 
                
    t pop()      
    { 
          return(a[top--]); 
    } 
    t peek()
    {
    	return a[top];
    }
    bool isEmpty(){
    	return top==-1;
    }                    
    void print() 
    { 
        for(i=0;i<top;i++) 
            cout<<" "<<a[i]; 
                                
        cout<<"\n"; 
    } 
                
}; 



int main() {
    char s[50];
    string str;
    stack<string>myStack;
         string temp;
    vector<string>v;
    while(scanf("%s",s)!=EOF)
        {
        
        v.push_back(s);
        for(int i=0;i<strlen(s);i++)
           
        { 
            if(s[i]>'A')s[i]=tolower(s[i]);
            str+=s[i];
            
        }  
        str+=" ";
    }
    if(v.size()==0){
        cout<<"INPUT IS NULL";
        return 0;}
    for(int i=0;i<v.size();i++)
    {
        myStack.push(v[i]);        
    }
    string rev="";
    while(!myStack.empty())
        {
           
            rev+=myStack.top();
            rev+=" ";
            myStack.pop();
        }
    cout<<"\n"<<rev<<"\n"<<str;
    if(rev==str)
        cout<<"SENTENCE IS A PANILDROME";
    else 
        cout<<"SENTENCE IS NOT A PANILDROME";
                
    return 0;
}