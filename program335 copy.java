
//Approach 3
//N/2 complexity
import java.util.*;

class Numbers {
    public int Evenfact(int iNo) {
        int iMult = 1;
        for (int iCnt = 2; iCnt <= iNo; iCnt += 2) {
            if ((iNo % iCnt) == 0) {
                iMult = iMult * iCnt;
            }
        }
        if(iMult == 1){
            return 0;
        }
        return iMult;
    }
}

class program335 {

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.Evenfact(iNo);

        System.out.println("The multiplication of even factors is: " + iRet);

        sobj.close();
    }
}