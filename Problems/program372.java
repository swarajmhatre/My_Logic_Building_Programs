import java.util.*;

public class program372 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        String arr[] = str.split(" ");
        System.out.println("THe number of words are: "+ arr.length);
        sc.close();
    }
}

