import java.util.*;
import java.lang.*;
import java.math.*;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
			Scanner sc=new Scanner(System.in);
			int m=sc.nextInt();
			
			BigInteger b1=new BigInteger("1");
			BigInteger MOD=new BigInteger("1000000000");
			while(m-->0){
				BigInteger k=new BigInteger(sc.next());
				b1=b1.multiply(k);
				
			} m=sc.nextInt();
			BigInteger b2=new BigInteger("1");
			while(m-->0){
				BigInteger k=new BigInteger(sc.next());
				b2=b2.multiply(k);
				
			}
			b1=b1.gcd(b2);
			int res=(b1.compareTo(MOD));
			if(res==-1){System.out.println(b1);}else{
			b1=b1.mod(MOD);
			String alpha=""+b1;
			
		//	sc.close();
			
StringBuffer buf = new StringBuffer(alpha);

while (buf.length() < 9) {
  buf.insert(0, '0');
}

String output = buf.toString();
			
			
			
			System.out.println(output);}
			sc.close();
		
	}
}
