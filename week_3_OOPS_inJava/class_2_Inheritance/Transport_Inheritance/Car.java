package week_3_OOPS_inJava.class_2_Inheritance.Transport_Inheritance;

public class Car extends Vehicle {
    public int noOfDoor;
    public String transmissionType;

    public Car(String name, String Model, int noOfTyres, int noOfDoor, String transmissionType){
        // super keyword here will call the ctor of Vehicle class 
        super(name, Model, noOfTyres);

        System.out.println("Car Ctor is called");
        this.noOfDoor = noOfDoor;
        this.transmissionType = transmissionType;
    }

    public void startAC(){
        System.out.println("Start AC for " + Name + " Car");
    }

    // get the licence no 
    void getLicenceNo(){
        this.getLicenceNo();
        // we can't directly access the licence no
        // in the sub Class also 
    }
}
