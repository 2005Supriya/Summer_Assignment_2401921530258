package Summer_Assignment_2401921530258.Week4.Oops.Ques1;

import java.util.Scanner;

public class ToTestInt {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Arithmetic obj = new Arithmetic();

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        System.out.println("Square = " + obj.square(num));

        sc.close();
    }
}