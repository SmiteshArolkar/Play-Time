#include "Format.h"
class Stack 
{
    private:

    struct Node {
        int data;
        Node* next;
    };

    void push(int val);
   
    void pop();

    int GetVal();

    void PrintStack(Node* temp);
    
   

    Node* top;

    public:
    Stack()
    {
        top = nullptr;
    }
    void  runApp();
    
  
    

};
