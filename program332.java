
//Approach 3
import java.util.*;

class Numbers {
    public int Evenfact(int iNo) {
        int iMulti = 1;
        for (int iCnt = 2; iCnt <= iNo; iCnt++) {
            if (((iNo % iCnt) == 0) && ((iCnt % 2) == 0)) {
                iMulti = iMulti * iCnt;

            }
        }
        return iMulti;
    }
}

class program332 {

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