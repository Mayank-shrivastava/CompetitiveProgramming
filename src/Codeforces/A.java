package Codeforces;

import java.util.*;
public class A {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while(t-->0) {
			String[] grid = new String[8];
			
			for(int i = 0; i < 8; i++) {
				grid[i] = scn.next();
			}
			
			solve(grid);
		}
		//scn.close();
	}
	
	public static void solve(String[] grid) {
		char ans = 'R';
	    for (int i = 0; i < 8; i++) {
	        boolean found = true;
	        for (int j = 0; j < 8; j++) {
	            if (grid[i].charAt(j)!= 'R') {
	                found = false;
	                break;
	            }
	        }
	        if (found) {
	            System.out.println(ans);
	            //System.exit(0);
	            return;
	        }
	    }
	    ans = 'B';
	    for (int j = 0; j < 8; j++) {
	        boolean found = true;
	        for (int i = 0; i < 8; i++) {
	            if (grid[i].charAt(j) != 'B') {
	                found = false;
	                break;
	            }
	        }
	        if (found) {
	            System.out.println(ans);
	            //System.exit(0);
	            return;
	        }
	    }
	}

}
