
//Ha follow kara
import java.util.*;

class StringX {
    public String RemoveWhiteSpace(String str){
        char Arr[] = str.toCharArray();

        char Brr[] = new char[Arr.length];

        int i=0;

        for(int iCnt =0; iCnt< Arr.length; iCnt++){
            if(Arr[iCnt] != ' '){
                Brr[i] = Arr[iCnt];
                i++;
            }
        }
        return new String(Brr);
    }
}

public class program360 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();


        String sRet = obj.RemoveWhiteSpace(Name);

        System.out.println("Result is: "+sRet);

        sobj.close();
    }
}