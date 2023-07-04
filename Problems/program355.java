//Ha follow kara
import java.util.*;

class StringX{
    
    public int CountSmall(String str){
         
         int iCount =0;

         for(int iCnt =0; iCnt < str.length(); iCnt++){
            if((str.charAt(iCnt) >='a') && (str.charAt(iCnt) <= 'z')){
                iCount++;
            }
         }
         return iCount;
    }

    public int CountCapital(String str){
      int iCount =0;

         for(int iCnt =0; iCnt < str.length(); iCnt++){
            if((str.charAt(iCnt) >='A') && (str.charAt(iCnt) <= 'Z')){
                iCount++;
            }
         }
         return iCount;
    }
}

public class program355 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Name: ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountSmall(Name);

        System.out.println("The number of Small characters are: "+ iRet);
        sobj.close();
    }
}