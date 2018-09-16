public class main {
	public static void main(String[] args) {
		int it = 2;
		float a = 0;
		float b = 1;
		float c  = a+b;
		while (Float.isFinite(c)) {
			a = b;
			b = c;
			c = a+b;
			it++;
			System.out.println(c);
		}
		System.out.println(it);
	}
}
