import java.util.*;

class Matrix {
    public int Arr[][];

    public Matrix(int i, int j) {
        Arr = new int[i][j];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements: ");

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();
    }

    public void Display() {

        System.out.println("Elements of Matrix are: ");

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                System.out.println(Arr[i][j] + "\t");
            }
            System.out.println();
        }

    }

    public int Summation() {
        int iSum = 0;
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                iSum += Arr[i][j];
            }
        }
        return iSum;
    }

    public void SummationRow() {
        int iSum = 0;
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                iSum += Arr[i][j];
            }
            System.out.println(("Sumamtion of Row " + (i + 1) + " is " + iSum));
            iSum = 0;
        }
    }
}

public class program390 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int iRow = 0;
        int iCol = 0;

        System.out.println("Enter the number of rows: ");
        iRow = sc.nextInt();
        System.out.println("Enter the number of Columns: ");
        iCol = sc.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        int iRet = mobj.Summation();
        System.out.println("The summation of the elements is: " + iRet);
        mobj.SummationRow();
        sc.close();
    }
}
