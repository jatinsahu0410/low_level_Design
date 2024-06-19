package Arrays;

import java.util.Scanner;

public class ArrayQuestions {
    public static void main(String[] args) {
        int arr[] = new int[7];
        // taking input in array 
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter new Elements 2 times: ");
        for(int i =0 ; i <7; i++){
            arr[i] = sc.nextInt();
        }

        // sum of the array 
        int sum = 0;
        int mini = Integer.MAX_VALUE;
        int mul = 1;
        for(int i: arr){
            sum += i;
            mul = mul*i;
            if(i < mini){
                mini = i;
            }
        }

        System.out.println("The sum of the array is " + sum);
        System.out.println("the multiplication of all : " + mul);
        System.out.println("The min in the array is : " +  mini);
        sc.close();
    }
}
