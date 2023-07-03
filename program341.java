
//Approach 3
//N/2 complexity
import java.util.*;

class Digits {
    boolean CheckArmstrong(int iNo){
        int iTemp = iNo;
        //Count Number of DIgits
        int iCount =0;
        int iDigit =0;
        
      
        while(iTemp!=0){
            iCount++;
            iTemp = iTemp/10;
        }
        iTemp = iNo;
        int iSum =0, iPower =1, iCnt =0;
        while(iNo!=0){
            iDigit = iNo%10;

            for ( iCnt = 1; iCnt <= iCount; iCnt++) {
                iPower = iPower*iDigit;
            }
            iSum = iSum + iPower;
            iPower =1;
            iNo = iNo/10;
        }
        if(iSum == iTemp){
            return true;
        }
        else{
            return false;
        }
    }
}

class program341 {

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        boolean bRet = dobj.CheckArmstrong(iNo);
        if(bRet){
            System.out.println(("Number is an Armstrong Number"));
        }
        else{
            System.out.println(("Number is not an Armstrong Number"));
        }
        sobj.close();
    }
}

/*
 * iNPUT: 371
 * 3^3+7^3+1^3
 * 27+ 343+1
 * 371
 */