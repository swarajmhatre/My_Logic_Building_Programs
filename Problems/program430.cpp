#include <iostream>
using namespace std;

class ArrayX{
    public: 
    int *Arr;
    int Size;

    ArrayX(int length){
        Size = length;
        Arr = new int [Size];
    }

    void Accept(){
        cout<< "ENter the elements: \n";
        int iCnt =0;
        for(iCnt =0; iCnt< Size; iCnt++){
            cin>> Arr[iCnt] ;
        }
    }
    void Display(){
        cout<< "The elements of the array are: \n";
        int iCnt =0;
        for(iCnt =0; iCnt< Size; iCnt++){
            cout<<  Arr[iCnt]<< "\n";
        }
    }
};

int main()
{
   ArrayX obj(5);

   obj.Accept();
   obj.Display();


    return 0;
}