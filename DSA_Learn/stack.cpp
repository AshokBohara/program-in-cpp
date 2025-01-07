#include<iostream>
class stack
{
    int size,top;
    int *STACK;
    public:
     void display();
    stack(int SIZE);
    bool IsFull();
    void push(int item);
    bool IsEmpty();
    int pop();
    ~stack();
};
stack::~stack()
{
    delete[] STACK;
}
stack::stack(int maxsize)
{
    size=  maxsize;
    STACK= new int [size];
    top=-1;
}


//emplement of FULL
bool stack::IsFull()
{
    if (top==size-1)
    return true;
    else
    return false;
}
//emplement of Empty
bool stack::IsEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}

//emplement of push
void stack::push(int item)
{
    if(IsFull())
    {
     std::cout<<"stack overflow.";
    }
    else
    {
        top++;
        STACK[top]=item;
    }
}

//emplement of pop
int stack::pop()
{
    int item;
    if(IsEmpty())
    {
          throw std::runtime_error( "stack underflow");
    }
    else
    {
        item=STACK[top];
        top--;
        return item;
    }
}

//implement of display
 void stack::display()
 {
    for(int i=top;i>=0;i--)
    {
        std::cout<< STACK[i] << " "; 
    }
 }
int main()
{

    stack s1(2);
    s1.push(4);
    s1.push(6);
    s1.display();
    std::cout<<"\nI popped " <<s1.pop()<< std::endl;
    std::cout<<"\nI popped "<<s1.pop()<<std::endl;
    s1.display();
    std::cout<<"\nI popped "<<s1.pop()<<std::endl;
}

