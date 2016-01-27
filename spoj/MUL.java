	import java.util.*;
	import java.math.*;
public class devil {

	/**
	 * @param args
	 */

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		while(a-->0){
			String b=sc.next();
			String c=sc.next();
			BigInteger b1=new BigInteger(b);
			BigInteger b2=new BigInteger(c);
			BigInteger b3=b2.multiply(b1);
			String abc=""+b3;
			System.out.println(abc);
		}
		sc.close();
	}

}

