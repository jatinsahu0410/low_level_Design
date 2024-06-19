package week_3_OOPS_inJava.class_2_Inheritance.Transport_Inheritance;

public class Vehicle {
    public String Name;
    public String Model;
    public int noOfTyres;
    // private data Member 
    private int licenceNo;

    // protected data member 
    protected String insurance;

    // default 
    String forWhat;

    // Default ctor 
    public Vehicle(){};

    // Paramterised Ctor 
    public Vehicle(String Name, String Model, int noOfTyres){
        System.out.println("Vehicle Ctor is called");
        this.Name = Name;
        this.Model = Model;
        this.noOfTyres = noOfTyres;
    }

    void startEng(){
        System.out.println("Engine start for " + Name);
    }

    void stopEngine(){
        System.out.println("Engine start for "+ Name);
    }

    int printLicenceNo(){
        return licenceNo;
    }
}
