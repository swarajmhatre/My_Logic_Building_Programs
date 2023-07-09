import java.util.*;

public class program385 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String str1 = sc.nextLine();

        System.out.println("Enter Second String: ");
        String str2 = sc.nextLine();

        if(str1.length() != str2.length()){
            System.out.println("Strings are not Anagram");
            return;
        }
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str2.toCharArray();
        char Brr[] = str2.toCharArray();

        int Freq[] = new int[26];

        int iCnt = 0;

        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            Freq[Arr[iCnt] - 'a']++;
             Freq[Brr[iCnt] - 'a']--;
        }

        for(iCnt =0; iCnt < Freq.length; iCnt++){
            if(Freq[iCnt] !=0 ){
                break;
            }
        }
        if(iCnt == Freq.length){
            System.out.println("Strings are Anagram");
        }
        else{
            System.out.println("Strings are not Anagram");
        }
    }
}
