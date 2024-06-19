package week_3_OOPS_inJava.class_2_Inheritance.Transport_Inheritance;

public class MotorCycle extends Vehicle{
    public String handleStyelType;
    public String suspensionType;

    // Ctor of MotorCycle 
    MotorCycle(String Name, String Model, int noOfTyres, String handleStyleTYpe, String suspensionType){
        super(Name, Model, noOfTyres);
        System.out.println("MotorCycle ctor is called");
        this.handleStyelType = handleStyleTYpe;
        this.suspensionType = suspensionType;
    }

    public void riding(){
        System.out.println("Your are Riding " + Name + " with model " + Model);
    }
}
