package Methods;

public class functionBasics {
    public static void main(String[] args) {
        demoFunc();
        int a = 10;
        int b = 20;
        int sum = getSum(a, b);
        System.out.println("Sum is : " + sum);
    }

    public static void demoFunc(){
        System.out.println("Go ");
        return ;
    }

    public static int getSum(int a, int b){
        return a + b;
    }
}
