import java.math.*;
import java.math.RoundingMode;

public class pe16 {

	 public static void main(String[] args) {

        BigInteger a = new BigInteger("2").pow(1000);

        
        System.out.println(sumOfDigits(a));

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