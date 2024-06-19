package String;

import java.util.Scanner;

public class StringBasics {
    public static void main(String[] args) {
        // string Literals 
        String name = "Jatin ";

        // new keyword --> heap memory 
        String lastName = new String("Sahu");

        System.out.println(name + lastName);

        // Immutable strings
        String str = "Kya";
        str = "love";
        System.out.println(str);

        // yaha pr just jo str hai uska refernce change ho raha hai 

        // String Input 
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter ur first Name : ");
        String firstName = sc.nextLine();
        System.out.println("Enter ur Last Name : ");
        String lastName2 = sc.next();

        System.out.println("Your name is : " + firstName + lastName2);
        sc.close();
    }
}