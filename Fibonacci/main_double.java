public class main {
	public static void main(String[] args) {
		int it = 2;
		double a = 0;
		double b = 1;
		double c  = a+b;
		while (Double.isFinite(c)) {
			a = b;
			b = c;
			c = a+b;
			it++;
			System.out.println(c);
		}
		System.out.println(it);
	}
}
