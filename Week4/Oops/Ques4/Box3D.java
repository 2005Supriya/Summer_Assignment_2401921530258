package Summer_Assignment_2401921530258.Week4.Oops.Ques4;

public class Box3D extends Box {

    private double height;

    // Constructor
    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    // Calculate Volume
    public double volume() {
        return length * breadth * height;
    }
}