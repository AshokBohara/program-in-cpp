#include <iostream>

class A
{
protected:
    int a;
public:
    void get_a()
    {
        a = 50;
        std::cout << "a = " << a << std::endl;
    }
};

class B : public A
{
    // Class B inherits get_a() from class A
};

int main()
{
    A a;
    B b;
    a.get_a();
    b.get_a();
    return 0;
}

