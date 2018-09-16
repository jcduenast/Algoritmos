public class main {
	public static void main(String[] args) {
		int it = 2;
		long a = 0;
		long b = 1;
		long c  = a+b;
		while (0<c) {
			a = b;
			b = c;
			c = a+b;
			it++;
		}
		System.out.println(it);
	}
}
