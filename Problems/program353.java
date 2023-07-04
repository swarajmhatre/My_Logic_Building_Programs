//Ha follow kara
import java.util.*;

class StringX{
    
    public int CountSmall(String str){
         char strArray[] = str.toCharArray();
         int iCount =0;

         for(int iCnt =0; iCnt < strArray.length; iCnt++){
            if((strArray[iCnt] >='a') && (strArray[iCnt] <= 'z')){
                iCount++;
            }
         }
         return iCount;
    }
}

public class program353 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountSmall(Name);

        System.out.println("The number of small characters are: "+ iRet);
        sobj.close();
    }
}