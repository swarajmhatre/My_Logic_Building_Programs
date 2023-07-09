import java.util.*;

public class program370 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();
        System.out.println(str.length());
        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        System.out.println(str.length());

        int iFrequency = 0;
        for (int iCnt = 0; iCnt < str.length(); iCnt++) {
            if (str.charAt(iCnt) == ' ') {
                iFrequency++;
            }
        }
        System.out.println("Number of Words are: " + (iFrequency + 1));
    }
}
