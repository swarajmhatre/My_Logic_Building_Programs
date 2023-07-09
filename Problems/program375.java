import java.util.*;

public class program375 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        String arr[] = str.split(" ");

        System.out.println("Enter the string to be compared: ");
        String strCmp = sc.nextLine();

        int iFreq =0;
        for(int iCnt =0; iCnt<arr.length; iCnt++){
            if(arr[iCnt].equals(strCmp)){
                iFreq++;
            }
        }
        System.out.println("The frequency of word is: "+ iFreq);
        sc.close();
    }
}

