
// Approach 2
import java.util.*;

public class program351 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        System.out.println("Your Name is: " + Name);

        System.out.println("Length of string is: " + Name.length());
        for (int iCnt = 0; iCnt < Name.length(); iCnt++) {
            System.out.println(Name.charAt(iCnt));
        }
        sobj.close();
    }
}