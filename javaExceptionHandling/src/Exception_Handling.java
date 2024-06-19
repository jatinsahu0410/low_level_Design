import java.util.LinkedList;

public class Exception_Handling {
    public static void main(String[] args) {
        System.out.println("before : ");
        try {
            // int num = 10/ 0;
            int arr[] = {19, 281, 92, 1};
            System.out.println(arr[10]);
        } catch (Exception e) {
            
            System.out.println(e);
        }finally{
            System.out.println("Always Excute");
        }

        System.out.println("After");
    }


    int a = 10;
    Integer b = a;

    LinkedList<Integer> arr =new LinkedList<>(); 
}
