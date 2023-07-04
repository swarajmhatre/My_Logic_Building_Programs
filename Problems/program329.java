//Approach2
import java.util.*;

class program329{
    public static int Factorial(int iValue){
        int iMult =1;

        for(int iCnt =1; iCnt<=iValue; iCnt++){
            iMult = iMult * iCnt;
        }
        return iMult;
    }
    public static void main(String args[]){
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();
        
        int iRet = Factorial(iNo);
        System.out.println("Factorial is: "+ iRet);
        sobj.close();
    }
}