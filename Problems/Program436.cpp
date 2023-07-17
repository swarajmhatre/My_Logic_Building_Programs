#include <iostream>
using namespace std;

template <class T>
struct NodeS{
    T data;
    struct NodeS *next;
};

template <class T>
class SinglyLL{
    public:
        struct NodeS<T> * Head;
        int iCount;
};



int main()
{
    SinglyLL <int> obj1;
    
   
    return 0;
}