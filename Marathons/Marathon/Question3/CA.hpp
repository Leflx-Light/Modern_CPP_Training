#include<iostream>

class CA
{
    public:
        CA()
        {
            std::cout << "CA ctor\n";
        }

        CA(int)
        {
            std::cout << "CA(int)\n";
        }

        CA(int, int)
        {
            std::cout << "CA(int, int)\n";
        }

        void fun1()
        {
            std::cout << "CA fun1\n";
        }

        void fun2()
        {
            std::cout << "CA fun2\n";
        }

        ~CA()
        {
            std::cout << "CA D-tor\n";
        }
};