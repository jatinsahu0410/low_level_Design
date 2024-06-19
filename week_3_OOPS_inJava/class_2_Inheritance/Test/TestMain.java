package week_3_OOPS_inJava.class_2_Inheritance.Test;
import week_3_OOPS_inJava.class_2_Inheritance.Transport_Inheritance.*;

public class TestMain {
    public static void main(String[] args) {
        Car c1 = new Car("Punch", "7h", 4, 5, "Manual");
        System.out.println("the name of the car" + c1.Name);

        // but if we try to access the Motor cycle then we  can't the ctor for motorcycle is default means it can be access outside the particular package

        // MotorCycle m1 = new MotorCycle();

        // protected is not accessible here 
        // System.out.println(c1.insurance);
    }
}
