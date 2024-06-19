package week_3_OOPS_inJava.class_2_Inheritance.Test;
// Sub class of Vehicle in different package
 
import week_3_OOPS_inJava.class_2_Inheritance.Transport_Inheritance.Vehicle;

public class Truck extends Vehicle {
    Truck(){
        super();
        this.insurance = "Jatin";
        // the protected member is accessible here in the ub Class of differenct Package 

        // for default data member --> it is not accessible outsize the package
        // this.forWhat();
    }
}
