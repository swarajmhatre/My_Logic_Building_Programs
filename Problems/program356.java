//Ha follow kara
import java.util.*;

class StringX{
    
    public String strLower(String str){
         
         
        //Step 1: Convert the string to an array
        char Arr[] = str.toCharArray();

        //Step 2: Perform Operatrions on array
        for(int iCnt =0; iCnt < Arr.length; iCnt++){
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')){
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        //Step 2 : COnvert Array to String
        String ret = new String(Arr);

        return ret;
    }

}

public class program356 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        String str = obj.strLower(Name);

        System.out.println("The modified String is: "+ str);
        sobj.close();
    }
}