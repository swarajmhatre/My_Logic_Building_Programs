import java.util.*;

public class program376 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        String arr[] = str.split(" ");
        int iLength = 0;
        int iPos = -1;
        for (int iCnt = 0; iCnt < arr.length; iCnt++) {
            if (arr[iCnt].length() > iLength) {
                iLength = arr[iCnt].length();
                iPos = iCnt;
            }

        }
        System.out.println("largest word is: " + arr[iPos] + " with length " + iLength);
        sc.close();
    }
}
