#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
     
    int isclassb(char *p,int i,int j)
    {
        int count=0,l=j-i+1;
        if(l==1)
            return 1;
        for(;i<=j;i++,j--)
        {
            if(p[i]!=p[j])
                count++;
        }
        if(count==1)
            return count;
        else
            return 0;
    }
    int isclassc(char *p)
    {
        int i,l=strlen(p);
        for(i=0;i<25;i++)
        {
            if(isclassb(p,0,i)&&isclassb(p,i+1,l-1))
                return 1;
        }
        return 0;
    }
     
    int main()
    {
        char test[26];
        scanf("%s",test);
        while(strcmp(test,"&END"))
        {
            if(isclassc(test))
                printf("%s YES\n",test);
            else
                printf("%s NO\n",test);
            scanf("%s",test);
        }
        return 0;
    }
