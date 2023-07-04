// Approach 1
import java.util.*;

public class program344 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("ENter the elements: ");
        int iCnt = 0;

        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of Array are: ");
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}