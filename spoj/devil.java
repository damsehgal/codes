	import java.util.*;
	import java.math.*;
public class devil {

	/**
	 * @param args
	 */
	public static boolean isIntegerValue(BigDecimal bd) {
		  return bd.signum() == 0 || bd.scale() <= 0 || bd.stripTrailingZeros().scale() <= 0;
		}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		BigDecimal a=new BigDecimal(sc.next());
		BigDecimal sum=new BigDecimal(0);
		//BigInteger sum2=new BigInteger("0");
		BigDecimal zero=new BigDecimal(0);
		BigDecimal one=new BigDecimal(-1);
		while(true){
			long b=sc.nextLong();
			while(b-->0){
				String lm=sc.next();
				BigDecimal b1=new BigDecimal(lm);
				//BigInteger b2=new BigInteger(lm);
				sum=sum.add(b1);
				//sum2.and(b2);
				a=a.subtract(one);
				if(a.compareTo(zero)<=0)break;
			}
			
			sum=sum.divide(a);
			if(isIntegerValue(sum))System.out.println("YES");
			else System.out.println("NO");
			sc.close();
		}
	
	}

}

