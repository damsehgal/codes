/*Fight for Chocolate
Max. Marks: 100

Tapan and Divya have a rectangular shaped chocolate bar with chocolates labeled T, D and U. They want to split the bar into exactly two pieces such that:

Tarun's piece can not contain any chocolate labeled D and similarly, Divya's piece can not contain any chocolate labeled T. All chocolates in each piece must be connected (two chocolates are connected if they share an edge), i.e. the chocolates should form one connected component.

The absolute difference between the number of chocolates in pieces should be at most K.

In any piece, there should not be 4 adjacent chocolates that form a square, i.e. there should not be a fragment like this:

XX
XX

Input Format

The first line of the input contains 3 integers M, N and K separated by a single space. M lines follow, each of which contains N characters. Each character is 'T','D' or 'U'.

Constraints

0≤ M, N ≤8 0≤ K ≤ M * N

Output Format

A single line containing the number of ways to divide the chocolate bar.
Sample Input
(Plaintext Link)

2 2 4
UU
UU

Sample Output
(Plaintext Link)

12

*/

#include <stdio.h>

long int count=0;
int m=0, n=0, k=0, i=0, j=0, ii=0, jj=0, countT=0, countD=0, diff=0, mm=0, nn=0, noT=0, noD=0, nflag=0;
char a[8][8], temp[8][8], flag[8][8];
 
void reset()
{
    int i1=0, j1=0;
    for(i1=0; i1<m; i1++)
    {
        for(j1=0; j1<n; j1++)
        {
            flag[i1][j1]='f';
        }
    }
}
 
void checkT(int i1, int j1)
{
    if((i1-1)>=0 && flag[i1-1][j1]=='f' && temp[i1-1][j1]=='T')
    {
        flag[i1-1][j1]='t';
        noT++;
        checkT(i1-1, j1);
    }
    if((i1+1)<m && flag[i1+1][j1]=='f' && temp[i1+1][j1]=='T')
    {
        flag[i1+1][j1]='t';
        noT++;
        checkT(i1+1, j1);
    }
    if((j1-1)>=0 && flag[i1][j1-1]=='f' && temp[i1][j1-1]=='T')
    {
        flag[i1][j1-1]='t';
        noT++;
        checkT(i1, j1-1);
    }
    if((j1+1)<n && flag[i1][j1+1]=='f' && temp[i1][j1+1]=='T')
    {
        flag[i1][j1+1]='t';
        noT++;
        checkT(i1, j1+1);
    }
}
 
void checkD(int i1, int j1)
{
    if((i1-1)>=0 && flag[i1-1][j1]=='f' && temp[i1-1][j1]=='D')
    {
        flag[i1-1][j1]='t';
        noD++;
        checkD(i1-1, j1);
    }
    if((i1+1)<m && flag[i1+1][j1]=='f' && temp[i1+1][j1]=='D')
    {
        flag[i1+1][j1]='t';
        noD++;
        checkD(i1+1, j1);
    }
    if((j1-1)>=0 && flag[i1][j1-1]=='f' && temp[i1][j1-1]=='D')
    {
        flag[i1][j1-1]='t';
        noD++;
        checkD(i1, j1-1);
    }
    if((j1+1)<n && flag[i1][j1+1]=='f' && temp[i1][j1+1]=='D')
    {
        flag[i1][j1+1]='t';
        noD++;
        checkD(i1, j1+1);
    }
}
 
int connected()
{
    int i1=0, j1=0;
    noT=noD=0;
    nflag=0;
    for(i1=0; i1<m; i1++)
    {
        for(j1=0; j1<n; j1++)
        {
            if(temp[i1][j1]=='T')
            {
                nflag=1;
                break;
            }
        }
        if(nflag)
            break;
    }
    //printf("ti1=%d j1=%d\n", i1, j1);
    nflag=0;
    if(temp[i1][j1]=='T')
    {
        reset();
        flag[i1][j1]='t';
        noT++;
        checkT(i1, j1);
    }
    for(i1=0; i1<m; i1++)
    {
        for(j1=0; j1<n; j1++)
        {
            if(temp[i1][j1]=='D')
            {
                nflag=1;
                break;
            }
        }
        if(nflag)
            break;
    }
    //printf("di1=%d j1=%d\n", i1, j1);
    if(temp[i1][j1]=='D')
    {
        reset();
        flag[i1][j1]='t';
        noD++;
        checkD(i1, j1);
    }
    if(noT==countT && noD==countD)
        return 1;
    else
        return 0;
}
 
void solve()
{
	//printf("%d%d  ", ii, jj);
	if(ii>=m)
	{
	    /*for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				printf("%c", temp[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		count++;*/
        /**/
	    countT=countD=0;
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
			    if(temp[i][j]=='T')
                    countT++;
                else
                    countD++;
			}
		}
		diff=countT-countD;
		if(diff<0)
            diff*=-1;
		if(diff<=k)
        {
            mm=m-1;
            nn=n-1;
            for(i=0; i<mm; i++)
            {
                for(j=0; j<nn; j++)
                {
                    if(( temp[i][j]=='T' && temp[i][j+1]=='T' && temp[i+1][j]=='T' && temp[i+1][j+1]=='T' )||( temp[i][j]=='D' && temp[i][j+1]=='D' && temp[i+1][j]=='D' && temp[i+1][j+1]=='D' ))
                        break;
                }
                if(j!=nn)
                    break;
            }
            if(i==mm)
            {
                if(connected())
                    count++;
                //printf("countT=%d countD=%d noT=%d noD=%d\n", countT, countD, noT, noD);
            }
        }
        /**/
		//return;
	}
	else
	{
		if(a[ii][jj]=='U')
		{
			temp[ii][jj]='T';
										if(jj==n-1){jj=0;ii++;/*printf("\n");*/}else jj++;
			solve();
                                        if(jj==0){jj=n-1;ii--;}else jj--;
			temp[ii][jj]='D';
										if(jj==n-1){jj=0;ii++;/*printf("\n");*/}else jj++;
			solve();
                                        if(jj==0){jj=n-1;ii--;}else jj--;
		}
		else
		{
		    temp[ii][jj]=a[ii][jj];
										if(jj==n-1){jj=0;ii++;/*printf("\n");*/}else jj++;
			solve();
                                        if(jj==0){jj=n-1;ii--;}else jj--;
		}
	}
}
 
int main()
{
	scanf("%d%d%d", &m, &n, &k);
	for(i=0; i<m; i++)
		scanf("%s", a[i]);
													/*for(i=0; i<m; i++)
													{
														for(j=0; j<n; j++)
														{
															printf("%c", a[i][j]);
														}
														printf("\n");
													}*/
    //printf("\n");//
	solve();
	//printf("\n\ncount=%d\n\n", count);//
    printf("%ld", count);
    return 0;
}

