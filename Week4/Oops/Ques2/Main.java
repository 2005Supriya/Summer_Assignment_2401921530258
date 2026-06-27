package Summer_Assignment_2401921530258.Week4.Oops.Ques2;

public class Main {

    public static void main(String[] args) {

        
        Outer outer = new Outer();
        outer.display();

        
        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}
