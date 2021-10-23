#include "stacks.cpp"
int main()
{
    std::cout<<"Start Of Program"<<std::endl;
    Stack* a = new Stack();
    a->runApp();
    free(a);
    std::cout<<"End of Program";
    std::cin.get();
    return 0;
}