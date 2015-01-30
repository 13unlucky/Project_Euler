import java.math.*;
import java.math.RoundingMode;

public class pe56 {

	 public static void main(String[] args) {
		int i = 0, j = 0;
		BigInteger hi = BigInteger.ZERO;
		BigInteger a = BigInteger.ZERO;
		for(i=1;i<100;i++){
			for(j=1;j<100;j++){
			
				a = BigInteger.valueOf(i).pow(j);
				if(hi.compareTo(sumOfDigits(a))< 0)
					hi = sumOfDigits(a);
			}
		}	
        System.out.println(hi);

    }

	private static BigInteger sumOfDigits(BigInteger n) {
		
		BigInteger sum = BigInteger.ZERO;
		while (n.compareTo(BigInteger.ZERO) == 1) {
			sum = sum.add(n.remainder(BigInteger.valueOf(10)));
			n = n.divide(BigInteger.valueOf(10));
		}

		return sum;
	}

}