import java.util.*;
import java.lang.*;
import java.math.BigInteger;
public class Solution 
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int l=sc.nextInt();
		String str[]=new String[l];
		for(int i=0;i<=l-1;i++)
		{
			str[i]=sc.next();	
		}
		long q=sc.nextLong();
		for(long j=1;j<=q;j++)
		{
			long check=sc.nextLong();
			if(check==0)
			{
				int a=sc.nextInt();
				long b=sc.nextLong();
				String tr="";
				for(int k=(a-1);k<b;k++)
				{
					tr=tr+str[k];
				}
				 BigInteger obj=new BigInteger(tr);
				 BigInteger obj1=new BigInteger("1000000007");
				obj=obj.mod(obj1);
				System.out.println(obj);
			}
			else
			{
				int a=sc.nextInt();
				String b=sc.next();
				str[a-1]=b;	
			}
		}	
	}
}