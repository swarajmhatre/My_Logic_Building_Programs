import java.util.*;


public class program381 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        String arr[] = str.split(" ");

        StringBuffer output = new StringBuffer();
        
        for(int iCnt = arr.length-1; iCnt>=0; iCnt--){
            output.append(new StringBuffer(arr[iCnt]).append(" "));
        }
        System.out.println(output);
        sc.close();
    }
}

