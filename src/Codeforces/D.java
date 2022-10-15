package Codeforces;

import java.util.*;
public class D {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while(t-->0) {
			int n = scn.nextInt();
			int[] arr = new int[n];
			for(int i = 0; i < n; i++) arr[i] = scn.nextInt();
			int ans = Integer.MIN_VALUE;
			for(int i = n-1; i >= 0; i--) {
				for(int j = i; j >= 0; j--) {
					if(gcd(arr[i], arr[j]) == 1) {
						ans = Math.max(ans, i+j);
					}
				}
			}
			if(ans == Integer.MIN_VALUE) {
				System.out.println(-1);
			} else {
				System.out.println(ans + 2);
			}
		}
		scn.close();
	}
	public static int gcd(int a, int b) {
		if(b == 0) return a;
		return gcd(b, a % b);
	}
}

/*
 * TODO:- 
 *   Code-chef starter up solve
 *   Code-forces div3 div4 up solve
 *   Study binary search
 *   Study more about back-end development in DOT-NET Core
 * */
