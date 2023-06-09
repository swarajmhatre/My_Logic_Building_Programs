#include <iostream>
using namespace std;
class Digit
{
private:
    int iNo;

public:
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

    Digit dObj(iValue1);
    return 0;
}