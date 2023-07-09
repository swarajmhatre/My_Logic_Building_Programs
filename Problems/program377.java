import java.util.*;

public class program377 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        StringBuffer sbObj = new StringBuffer(str);
        sbObj = sbObj.reverse();

        System.out.println(sbObj);

        sc.close();
    }
}
