package Summer_Assignment_2401921530258.Week4.Oops.Ques4;

public class Box {

    protected double length;
    protected double breadth;

    // Constructor
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Calculate Area
    public double area() {
        return length * breadth;
    }
}
