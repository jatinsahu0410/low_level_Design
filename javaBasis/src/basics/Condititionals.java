package basics;

import java.util.Scanner;

public class Condititionals {
    public static void main(String[] args) {
        System.out.print("Enter ur Income : ");
        Scanner sc = new Scanner(System.in);
        int income = sc.nextInt();

        if (income > 10) {
            System.out.println("You are rich! Go to hell. ");
        }

        // trnary operator
        System.out.println(income > 100 ? "Go to hell" : "Come on Dumb");

        // nested if else
        int age;
        System.out.print("Enter ur age : ");
        age = sc.nextInt();

        boolean knowDriving;
        System.out.print("Do u know driving : ");
        knowDriving = sc.nextBoolean();

        if (age > 18 && knowDriving) {
            System.out.println("You have right to drive if u know to drive.");
            if (knowDriving == true) {
                System.out.println("Go to hell bast! LLD course hai ya kya time pass.");
            } else {
                System.out.println("dumb");
            }
        } else {
            System.out.println("Bada to ho ja beta. ");
        }

        sc.close();
    }
}
