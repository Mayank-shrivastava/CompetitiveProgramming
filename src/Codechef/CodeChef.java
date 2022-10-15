package Codechef;

import java.util.*;

public class CodeChef {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while(t-->0) {
			int a = scn.nextInt(), b = scn.nextInt(), c = scn.nextInt();
			if(a == (b+c) || b == (a+c) || c == (a+b)) {
				System.out.println("Yes");
			} else {
				System.out.println("No");
			}
		} 
		scn.close();
	}
}
