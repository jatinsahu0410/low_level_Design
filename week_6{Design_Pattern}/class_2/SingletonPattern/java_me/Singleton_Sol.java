public class Singleton_Sol {
    // Solution by lazy Approach
    private Singleton_Sol() {
        System.out.println("Object Created");
    }

    private static class Holder {
        private static final Singleton_Sol INSTANCE = new Singleton_Sol();

    }

    // Prevents early initialization;
    public static Singleton_Sol getInstance() {
        System.out.println(Holder.INSTANCE);
        return Holder.INSTANCE;
    }

    public static void main(String[] args) {
        Thread th1 = new Thread(() -> {
            Singleton_Sol.getInstance();
        });
        Thread th2 = new Thread(() -> {
            Singleton_Sol.getInstance();
        });

        th1.start();
        th2.start();
    }
}
