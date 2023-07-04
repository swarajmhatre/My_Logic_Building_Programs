
//Ha follow kara
import java.util.*;

class StringX {
    public String RemoveWhiteSpace(String str){
      return str.replaceAll("\\s", "");
    }
}

public class program362 {
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