#include <iostream>
using namespace std;
class Digit
{
public:
    int iNo;

    Digit(int x)
    {
        iNo = x;
    }
};
int main()
{
    int iValue1 = 0;
    cout << "Enter Number : \n";
    cin >> iValue1;

    Digit dObj1(iValue1);
    return 0;
}