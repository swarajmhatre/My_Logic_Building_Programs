
//Approach 3
//N/2 complexity
import java.util.*;


class Digits {
    public int GenericRoot(int iNo) {
        
        int iSum =0;
        while(iNo >=10){
            while(iNo>0){
                iSum = iSum+ (iNo %10);
                iNo = iNo/10;
            }
            if(iSum>=10){
                iNo = iSum;
                iSum =0;
            }
            else{
                iNo =iSum;
                break;
            }
        }
        return iNo;
    }
}
class program340 {

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

