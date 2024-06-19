package week_3_OOPS_inJava.class_1;

public class Main {
    public static void main(String[] args) {
        //  default ctor for student 
        Student s1 = new Student();
        s1.name = "Jatin";
        s1.age = 20;
        s1.id = 21;
        s1.nos = 5;

        System.out.println(s1.name);
        System.out.println(s1.age);
        System.out.println(s1.id);

        // Object creation using Parameterised Ctor 
        Student s2 = new Student(2, 22, "Sans", 5);
        System.out.println(s2.name);
        System.out.println(s2.age);
        System.out.println(s2.id);

        // copy objects 
        Student s3 = new Student(s2);
        System.out.println(s3.name);
        System.out.println(s3.age);
        s2.sleep();

        s2.setFName("Ramu KAKA");
        System.out.println(s2.getFname());

        System.out.println("Is s2 student chat with authentication :");
        s2.getChat();
    }
}
