
//Approach 3
//N/2 complexity
import java.util.*;

class Digits {
    public int CountDigits(int iNo) {
        
        int iCnt =0;

        while(iNo>0){
            iCnt++;
            iNo = iNo/10;
        }
        return iCnt;
    }
}

class program337 {

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