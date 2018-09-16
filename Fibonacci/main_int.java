public class main {
	public static void main(String[] args) {
		int it = 2;
		int a = 0;
		int b = 1;
		int c  = a+b;
		while (0<c) {
			a = b;
			b = c;
			c = a+b;
			it++;
		}
		System.out.println(it);
	}
}
