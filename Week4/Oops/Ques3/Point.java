package Summer_Assignment_2401921530258.Week4.Oops.Ques3;

public class Point {

    private int x;
    private int y;

    // Default constructor
    public Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}
