#include<iostream>

class CB
{
    public:
        CB()
        {
            std::cout << "CB ctor\n";
        }

        CB(int)
        {
            std::cout << "CB(int)\n";
        }

        CB(int, int)
        {
            std::cout << "CB(int, int)\n";
        }

        void fun1()
        {
            std::cout << "CB fun1\n";
        }

        void fun2()
        {
            std::cout << "CB fun2\n";
        }

        CB(CA obj)
        {
            std::cout << "CB(CA)\n";
        }

        ~CB()
        {
            std::cout << "CB D-tor\n";
        }
};