package Arrays;

public class ArrayBasics {
    public static void main(String[] args) {
        int arr[] = {10};
        System.out.println(arr[0]);

        // declaration in array
        // int crr[];
        int []brr;

        brr = new int[10];
        System.out.println(brr[0]);

        // Out of bound exception 
        System.out.println(arr[2]);
    }
}
