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
            if(s[])
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