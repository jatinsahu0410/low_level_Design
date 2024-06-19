package week_3_OOPS_inJava.class_3_Polymorphism;

public class Main {
    public static void main(String[] args) {
        // Testing the method overloading
        Calculator c = new Calculator();
        System.out.println("Add method for two numbers : " + c.add(1, 908));
        int arr[] = {1, 29, 0, 9, 1};
        System.out.println("Add method used for an array : " + c.add(arr, 5));

        // Run Time polymorphism --> 
        // function overridding 
        // dynamic method Dispatch [UPCASTING] : 
        Shape s = new Shape();
        s.draw();

        // Draw method here is polymorphic 
        Circle c1 = new Circle();
        c1.draw();  

        Shape s2 = new Circle();
        s2.draw();

        Shape s3 = new Rectangle();
        s3.draw();
        System.out.println();
        System.out.println();

        // dynamic method dispatch 
        Circle c3 = new Circle();
        // yaha pe upcasting ho rahi hai 
        doDrawingStuff(c3); // Circle drawing 

        Shape s4 = new Circle();
        doDrawingStuff(s4); 

        // DOWNCASTING
        // Circle c4 = new Circle();
        // doDrawingStuff(c4);
    }

    // dynamic method dispatch 
    public static void doDrawingStuff(Shape s){
        // relevant shape ke draw method ko call kar dega 
        // yaha pe upcasting hue hai 
        // doing run time polymorphism
        s.draw();

        // Downcasting 
        // Circle c  = (Circle)s;
        // c.draw();
    } 
}
