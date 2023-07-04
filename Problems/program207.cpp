#include <iostream>
using namespace std;

class Number
{
public:
    int iNo1;
    int iNo2;
    void Accept()
    {

        cout << "Enter First Number";
        cin >> iNo1;
        cout << "\nEnter Second Number";
        cin >> iNo2;
    }
    int maximun()
    {
        return (iNo1 > iNo2 ? iNo1 : iNo2);
    }
};

int main()
{
    int iRet = 0;

    Number nObj;
    nObj.Accept();
    
    iRet = nObj.maximun();

    cout << "\nThe maximum of two values is: " << iRet;
    return 0;
}