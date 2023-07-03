
//Approach 3
//N/2 complexity
import java.util.*;

class Digits {
    public int CountDigits(int iNo) {
        
        int iSum =0;
        if(iNo<0){
            iNo = -iNo;
        }
        while(iNo>0){
            iSum += (iNo%10); 
            iNo = iNo/10;
        }
        return iSum;
    }
}

class program338 {

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDigits(iNo);

        System.out.println("The  Number of digits int the number is: " + iRet);

        sobj.close();
    }
}