#include <iostream>
using namespace std;

// Structure for Singly Linear and Singly Circular
template <class T>
struct NodeS{
    T data;
    struct NodeS *next;
};

// Structure for Doubly Linear and Doubly Circular
template <class T>
struct NodeSD{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

//Class of SIngly Linear LL
template <class T>
class SinglyLL{
    public:
        struct NodeS<T> * first;
        int iCount;
};

//Class of SIngly Circluar LL
template <class T>
class SinglyCL{
    public:
        struct NodeS<T> * first;
        struct NodeS<T> * last;
        int iCount;
};

//Class of Dooubly Linear LL
template <class T>
class DoublyLL{
    public:
        struct NodeD<T> * first;
        int iCount;
};

//Class of Dooubly Circluar LL
template <class T>
class DoublyCL{
    public:
        struct NodeD<T> * first;
        struct NodeD<T> * last;
        int iCount;
};


//Logic of 32 Functions


int main()
{
    SinglyLL <int> obj1;
    
   
    return 0;
}