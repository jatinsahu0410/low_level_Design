// Demo of why the code will fail in multithreaded system
public class Singleton {
    private static Singleton singleton;

    private Singleton() {
        System.out.println("Cinside Constructor, object created");
    }

    public static Singleton getInstance() {
        if(singleton == null){
            singleton = new Singleton();
        }
        return singleton;
    }

    public static void main(String[] args) {

        // Singleton obj1 = Singleton.getInstance();
        // Singleton obj2 = Singleton.getInstance();
        // // only single object is created in single thread

        // this will create two objects mostly
        Thread th1 = new Thread(() -> {Singleton.getInstance();});
        Thread th2 = new Thread(() -> {Singleton.getInstance();});

        th1.start();
        th2.start();
    }
}
