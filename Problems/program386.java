import java.util.*;

public class program386 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First String: ");
        String str1 = sc.nextLine();

        System.out.println("Enter Second String: ");
        String str2 = sc.nextLine();

        if(str1.length() != str2.length()){
            System.out.println("Strings are not Anagram");
            sc.close();
            return;
        }
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str2.toCharArray();
        char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        if(Arrays.equals(Arr, Brr)){
            System.out.println("Strings are anagram;");
        }
        else{
            System.out.println("Strings are not anagram;");
        }

        sc.close();
    }
}
