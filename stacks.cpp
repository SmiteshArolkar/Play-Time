
#include "stacks.h"

void Stack::push(int val)
 {
        if(!top)
        {
            top = new Node();
            top->data = val;
            top->next = nullptr;
        }
        else
        {
            Node* temp = new Node();
            temp->data = val;
            temp->next = top;
            top = temp;
        }
       
}

void Stack::pop()
{
    if(top)
    {
          Node* temp = top;
          top = top->next;
          delete(temp);
    }
    else
    {
          std::cout<<"Stack Empty\n"<<std::endl;
          std::cin.get();
    }
}
int Stack::GetVal()
{
    int val;
    std::cout<<"Enter Value"<<std::endl;
    std::cin>>val;
    return val;
}
void Stack::PrintStack(Node* temp)
{
    drawLine();
    while(temp)
    {
        std::cout<<temp->data<<std::endl;
       temp = temp->next;
    }
    drawLine();
}
void Stack::runApp()
{
        top = nullptr;
        int choice;
        do
        {
            std::cout<<"1: push \t 2: pop \t 3:display Stack \t 0:exit "<<std::endl;
            std::cin>>choice;
            switch (choice)
            {
            case 1 : push(GetVal());
               
                break;
            case 2: pop();
             break;
            
            case 3: PrintStack(top);

            case 0:
            break;
            
            default:std::cout<<"Invalid Input"<<std::endl;
                break;
            }
            /* code */
        } while (choice);
        
}