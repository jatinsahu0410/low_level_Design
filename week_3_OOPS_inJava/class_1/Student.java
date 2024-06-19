package week_3_OOPS_inJava.class_1;

// encapsulation implementation in java 
public class Student {
    // attributes
    public int id;
    public int age;
    public String name;

    // if a prefect encapsulated class then we need getter and setter to access the members of the class 
    private String fName;
    public int nos;
    // some private member :
    private String gfName;

    // Default Ctor --> allr. ki value ko garbage set kar deta hai
    public Student() {
        System.out.println("Default Ctor is Called.");
    }

    // parameterised Ctor 
    public Student(int id, int age, String name, int nos)
    {
        System.out.println("Parameterised ctor is called");
        this.id = id;
        this.name = name;
        this.age = age;
        this.nos = nos;
    }

    // Copy Ctor 
    public Student(Student srcStudent){
        System.out.println("Copy Ctor is Called");
        this.age = srcStudent.age;
        this.name = srcStudent.name;
        this.id = srcStudent.id;
        this.nos = srcStudent.nos;
    }

    // methods
    public void study() {
        System.out.println(name + "Student is Study.");
    }

    public void sleep() {
        System.out.println(name + " is sleeping.");
    }

    // getter function for father 
    public String getFname(){
        return fName;
    }

    // /setter  for fName'
    public void setFName(String fname){
        // u can here set an extra layer of authentication
        this.fName = fname;
    }

    private void chatting(){
        System.out.println(name + " is chating with his gf " + gfName);
    }

    // getter for the chatting
    public void getChat(){
        chatting();
    }
}