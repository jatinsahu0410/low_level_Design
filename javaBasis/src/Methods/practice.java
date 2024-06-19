package Methods;

import java.util.Scanner;

public class practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of n :");
        n = sc.nextInt();

        printName(n);
        System.out.println("the sum upto " + n +" is : "+ sumUptoN(n));
        sc.close();
        System.out.println("the average off 7 and 8 is : " + average(7, 8));
    }

    public static void printName(int n){
        for(int i =0; i<n; i++){
            System.out.println("the name is");
        }
    }

    public static int sumUptoN(int n){
        return (n + 1)*n/2;
    }

    // average of two numbers 
    public static double average(int a, int b){
        return (double)(a + b)/2;
    }
}
