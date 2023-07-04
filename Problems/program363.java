
//Ha follow kara
import java.util.*;

class StringX {
    public String Reverse(String str) {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length-1;
        char cTemp = ' ';
        while(iStart <iEnd){
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;
            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}

public class program363 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.Reverse(Name);

        System.out.println("Result is: " + sRet);

        sobj.close();
    }
}