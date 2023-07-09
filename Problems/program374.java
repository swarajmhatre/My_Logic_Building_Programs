import java.util.*;

public class program374 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        String arr[] = str.split(" ");

        System.out.println("Enter the string to be compared: ");
        String strCmp = sc.nextLine();

        int iCnt =0;
        for(String Str1: arr){
            if(Str1.equals(strCmp)){
                iCnt++;
            }
        }
        System.out.println("The frequency of word is: "+ iCnt);
        sc.close();
    }
}

