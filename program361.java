
//Ha follow kara
import java.util.*;

class StringX {
    public String RemoveWhiteSpace(String str){
        char Arr[] = str.toCharArray();

        String output = "";

        for(int iCnt =0; iCnt< Arr.length; iCnt++){
            if(Arr[iCnt] != ' '){
                output = output + Arr[iCnt];
            }
        }
        return output;
    }
}

public class program361 {
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