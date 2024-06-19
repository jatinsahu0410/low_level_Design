package basics;

public class loops {
    public static void main(String[] args) {
        int count = 0;
        for (int i = 0; i <= 10; ++i) {
            System.out.print(i + " -> ");
            System.out.print(" I love u! ke liye koi place nhi hai");
            count++;
            System.out.println(" : ::" + count);
        }

        System.out.println();

        // What is while loop
        int j = 0;
        int count2 = 0;
        while (j <= 10) {
            System.out.print(j + " -> ");
            j++;
            System.out.print(" I love u! ke liye koi place nhi hai");
            count2++;
            System.out.println(" :: " + count2);
        }
        System.out.println();

        // Do while loop
        int k = 1;
        do {
            System.out.print(k + " -> ");
            k++;
            System.out.println(" I love u! ke liye koi place nhi hai");
        } while (k <= 10);
    }
}
