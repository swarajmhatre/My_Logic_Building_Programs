import java.util.*;

public class program373 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        String arr[] = str.split(" ");
        int iCnt =0;
        for(String Str1: arr){
            if(Str1.equals("India")){
                iCnt++;
            }
        }
        System.out.println("The frequency of word is: "+ iCnt);
        sc.close();
    }
}

