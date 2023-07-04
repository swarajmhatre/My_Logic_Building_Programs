//Ha follow kara
import java.util.*;

public class program352 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        System.out.println("Your Name is: " + Name);

        System.out.println("Length of string is: " + Name.length());
        
        char str[] = Name.toCharArray();

        for (int iCnt = 0; iCnt < str.length; iCnt++) {
            System.out.println(str[iCnt]);
        }
        sobj.close();
    }
}