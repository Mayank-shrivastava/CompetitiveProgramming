package Codeforces;

import java.util.*;
public class B {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t =  scn.nextInt();
		while(t-->0) {
			int n = scn.nextInt();
			int[] arr = new int[n];
			for(int i = 0; i < n; i++) arr[i] = scn.nextInt();
			// if count of each element in the array is one then it is possible to make the array strictly increasing
			HashSet<Integer> set = new HashSet<>();
			String ans = "";
			for(int i = 0; i < n; i++) {
				if(set.contains(arr[i])) {
					ans = "No";
					break;
				} else {
					set.add(arr[i]);
				}
			}
			
			
			if(ans == "No") {
				System.out.println("NO");
			} else {
				System.out.println("YES");
			}
		}
	}

}
