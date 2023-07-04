
//Approach 3
//N/2 complexity
import java.util.*;

class Digits {
    public int GenericRoot(int iNo) {
        
        int iRes =iNo;
        int iSum =0;
        while(iRes >=10){
            iNo = iRes;
            iSum =0;
            while(iNo>0){
                iSum = iSum+ (iNo %10);
                iNo = iNo/10;
            }
            iRes = iSum;
        }
        return iRes;
    }
}

class program339 {

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.GenericRoot(iNo);

        System.out.println("The  Generic Root is: " + iRet);

        sobj.close();
    }
}

