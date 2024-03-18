#include<iostream>
#include<map>

using namespace std;

class Vendor
{
    public :
        Vendor(int vendor_id = -1,string name="", double charge = 0) : _vendor_id(vendor_id),_name(name), _vendor_charges(charge)
        {
        }

        int get_vendor_id() const
        {
            return _vendor_id;
        }


        string getVendor_name() const
        {
            return _name;
        }

        double getCharges() const
        {
            return _vendor_charges;
        }

        ~Vendor()
        {
        }

    private :
        int _vendor_id;
        string _name;
        double _vendor_charges;
};

class VendorRepository
{

public:
    static map<int, Vendor*> vend;
    static void Register(Vendor* vendor)
    {
        int id = vendor->get_vendor_id();
        vend[id] = vendor;
    }
    static void unRegister(int id)
    {
        delete vend[id];
    }

    static Vendor* getVendor(int id)
    {
        return vend[id];
    }

    static void clear()
    {
        for(auto rng : vend)
        {
            int id = rng.first;
            delete vend[id];
        }
        vend.clear();
    }
};
map<int, Vendor*> VendorRepository::vend;


class Car
{
    public :
        
        Car(int rNum, int sNum, int km, double charge, int vendorId) : _number(rNum), _seat_count(sNum), _km(km)
        {
            Vendor* v = VendorRepository::getVendor(vendorId);
            _vendor = v;
        }

        int getRegisterationNumber() const
        {
            return _number;
        }

        void updateRegisterationNumber(int newRegisterNum)
        { 
            _number = newRegisterNum;
        }

        int getSeatCount() const
        {
            return _seat_count;
        }

        double getKm() const
        {
            return _km;
        }

        void updateSeatCount(int newSeatCount)
        { 
            _seat_count = newSeatCount;
        }

        int getCharges() const
        {
            return _per_km_charge;
        }

        

        void updateCharges(int newCHarges)
        { 
            _per_km_charge = newCHarges;
        }

        Vendor* getVendor() const
        {
            return _vendor;
        }

        void updateVendor(int id)
        {
            delete _vendor;
            _vendor = new Vendor(id);
        }

        ~Car() noexcept
        {
        }

    private :
        int _number;
        int _seat_count;
        double _km;
        double _per_km_charge;
        Vendor* _vendor;
};

class Transaction
{
    //map of booking ID and Car instance
    map<int, Car*> repo;
public:
    void Subcribe(int registerNum, int seatCount,int km, int charges, int vendorId)
    {
        repo[vendorId] = new Car(registerNum, seatCount,km, charges, vendorId);
    }

    Vendor* getVendor(int id)
    {
        Vendor* v = VendorRepository::vend[id];
        if(v == nullptr)
        {
            throw "No Vendor Exist\n";
        }

        return v;
    }
    void Unsubscribe(int id)
    {
        delete repo[id];
        repo.erase(id);
    }
    void List()
    {
        
        for (auto rng : repo)
        {
            int id = rng.first;
            Car* c = repo[id];


            Vendor* vendor = c->getVendor();
            cout << vendor->get_vendor_id() << '\t' << vendor->getVendor_name() << '\t' << vendor->getCharges() << '\n';
            cout << "Total charges for " << c->getKm() << "Km : " << vendor->getCharges() * c->getKm() << "\n";
            cout << "==========================================================\n";
        }
    }
 
    void List(int vId)
    {
        for (auto rng : repo)
        {
            int id = rng.first;
            Car* c = repo[id];


            Vendor* vendor = c->getVendor();
            if (vendor->get_vendor_id() == vId)
            {
                cout << vendor->get_vendor_id() << '\t' << vendor->getVendor_name() << '\t' << vendor->getCharges() << '\n';
            }
        }
    }
};

class Dummy
{
public:
    Dummy()
    {
        VendorRepository::Register(new Vendor(1101, "OLA", 1));
        VendorRepository::Register(new Vendor(1102, "Uber", 2));
        VendorRepository::Register(new Vendor(1103, "Rapido", 1.5));
        VendorRepository::Register(new Vendor(1104, "IRCTC", 2.4));
        VendorRepository::Register(new Vendor(1105, "FabHotel", 2));
        VendorRepository::Register(new Vendor(1107, "InDriver", 3));
    }

    ~Dummy()
    {
        VendorRepository::clear();
    }

}dummy;


int main()
{
    Transaction trans;
    trans.Subcribe(11, 4, 20, 100, 1101);
    trans.Subcribe(12, 2, 10, 200, 1101);
    trans.Subcribe(13, 5, 5, 100, 1102);
    trans.Subcribe(14, 6, 5, 150, 1104);
    trans.Subcribe(15, 1, 8, 190, 1101);
    trans.Subcribe(16, 4, 11, 110, 1103);

    trans.List();

    try{
        trans.getVendor(11021);
    }
    catch(const char* s)
    {
        cout << s<< endl;
    }

    trans.getVendor(1102);

}