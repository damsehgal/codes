/*For every string given as input, you need to tell us the number of subsequences of it that are palindromes (need not necessarily be distinct). Note that the empty string is not a palindrome. */
 #include <iostream>
    #include<string.h>
    using namespace std;
    #define rep(i,n) for(int i=0;i<n;i++)
    #define long long ll;
    int gcd(int a, int b)	{return (a == 0) ? b : gcd(b%a, a); }
    int main()
    {
    	int t;
    	cin >> t;
    	while(t--)
    	{
    		char s[51];
    		cin >> s;
    		int dp[51][51],l=strlen(s);
    		rep(i,l)rep(j,l)dp[i][j]=0;
    		for(int i=l-1;i>=0;i--)
    		{
    			int c=1;
    			dp[i][i]=1;
    			if(i+1!=l)
    			{
    				if(s[i]==s[i+1])
    				{
    					c++;
    					dp[i][i+1]=3;
    				}
    				else
    					dp[i][i+1]=2;
    			}
    			for(int j=i+2;j<l;j++)
    			{
    				if(s[i]==s[j])
    				{
    					c++;
    					c+=dp[i+1][j-1];
    				}
    				dp[i][j]=dp[i+1][j]+c;
    			}
    		}
    		cout << dp[0][l-1] << endl;
    	}
    	return 0;
    }
