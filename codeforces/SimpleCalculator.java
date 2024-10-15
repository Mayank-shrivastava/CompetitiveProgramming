package codeforces;

import java.util.*;

public class SimpleCalculator {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // Read the two numbers X and Y
        int X = scn.nextInt();
        int Y = scn.nextInt();

        // Perform the arithmetic operations
        long sum = X + Y;
        long product = (long) X * Y;
        long difference = X - Y;

        // Print the results in the required format
        System.out.println(X + " + " + Y + " = " + sum);
        System.out.println(X + " * " + Y + " = " + product);
        System.out.println(X + " - " + Y + " = " + difference);
    }
}
