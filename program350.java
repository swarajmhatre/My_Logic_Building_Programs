
// Approach 2
import java.util.*;


public class program350 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
       String Name = sobj.nextLine();

       System.out.println("Your Name is: "+ Name);

       System.out.println("Length of string is: "+ Name.length());
        sobj.close();
    }
}