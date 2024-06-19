package week_3_OOPS_inJava.class_2_Inheritance.Transport_Inheritance;

public class Main {
    public static void main(String[] args) {
        Car c = new Car("Nexon", "XX01", 4, 5, "Aotumatic");
        c.startEng();
        c.startAC();
        c.stopEngine();

        MotorCycle m1 = new MotorCycle("BMW", "X56", 2, "U", "Soft");
        m1.startEng();
        m1.riding();
        m1.stopEngine();
        System.out.println(m1.suspensionType);
        System.out.println(m1.Model);

        // default data member : 
        System.out.println(m1.forWhat);
    }
}
