import java.util.*;

public class program367 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.toLowerCase();

        str = str.replaceAll("\\s", "");

        char Arr[] = str.toCharArray();

        int Freq[] = new int[26];
        int iCnt = 0;
        for (char ch: Arr) {
            Freq[ch - 'a']++;
        }

        System.out.println("Frequency of Each letter is: ");
        for (iCnt = 0; iCnt < Freq.length; iCnt++) {
            if (Freq[iCnt] != 0) {
                System.out.println("Frequency of '" + (char) (iCnt + 'a') + "' is: " + Freq[iCnt]);
            }
        }
    }
}
