#include "car.h"

#define line() std::cout << "*********************************************************************"

class Dummy
{
public:
    Dummy()
    {
        VendorRepository::Enroll(new Vendor("OLA", 2));
        VendorRepository::Enroll(new Vendor("Uber", 4));
        VendorRepository::Enroll(new Vendor("Rapido", 5));
        VendorRepository::Enroll(new Vendor("IRTC", 1.6));
        VendorRepository::Enroll(new Vendor("FabHotels", 2.5));
    }
} dummy;

void CreateRepo(Helper &h, int num, int seat, int perkm, std::string str)
{
    try
    {
        h.Subscribe(new Car(num, seat, perkm, str));
    }
    catch (const char *temp)
    {
        std::cout << temp;
    }
}

void Test()
{
    Helper h;
    CreateRepo(h, 101, 4, 120, "Uber");
    CreateRepo(h, 102, 4, 30, "OLA");
    CreateRepo(h, 103, 4, 75, "Rapido");
    CreateRepo(h, 104, 4, 50, "IRCT");
    CreateRepo(h, 105, 4, 20, "FabHotels");

    h.List();

    line();

    h.Unsubscribe(104);

    h.List();
    line();

    h.List("IRTC");
}

int main()
{
    Test();
}
