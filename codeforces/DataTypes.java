package codeforces;

import java.util.Scanner;

public class DataTypes {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int a = scn.nextInt();
        long b = scn.nextLong();

        char c = scn.next().charAt(0);

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);


        if (scn.hasNextFloat()) {
            float d = scn.nextFloat();
            System.out.printf("%.3f\n", d);

            if (scn.hasNextDouble()) {
                double e = scn.nextDouble();
                System.out.printf("%.9f\n", e);
            }
        }
    }
}
