#include <iostream>
using namespace std;

class Array
{
public:
    int iSize;
    int *Arr;
    Array(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }
    ~Array(){
        delete []Arr;
    }
    void Accept()
    {
        cout << "Enter the elements: \n";
        int iCnt = 0;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }
    void Display()
    {
        cout << "Elements in the arrray are: \n";
        int iCnt = 0;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\n";
        }
    }
    int Summation(){
        int iSum = 0;
        int iCnt =0;
   for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
};

int main()
{
    int iNo = 0;
    int iRet =0;
    cout << "Enter the number of elements: ";
    cin >> iNo;
    Array AObj(iNo);
    AObj.Accept();
    AObj.Display();
    iRet = AObj.Summation();
    cout <<"\nTHE SUMMATION IS: "<<iRet;
    return 0;
}
