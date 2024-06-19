package week_3_OOPS_inJava.class_3_Polymorphism;

// Method overloading 
public class Calculator {
    int add(int a, int b){
        return a + b;
    }

    // overloading of the add function 
    // by differing the count of arguments 
    int add(int a, int b, int c){
        return a + b + c;
    }

    // by differing the argument type 
    int add(int arr[], int n){
        int total = 0;
        for(int it : arr){
            total += it;
        }
        return total;
    }
}