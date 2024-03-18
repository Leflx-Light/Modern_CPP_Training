#ifndef LICENSE_H
#define LICENSE_H
#include "LicenseType.h"
#include <ostream>
class License
{
private:
    int _license_number;
    LicenseType _license_type;
public:
    License()=delete;
    License(const License&)=delete;
    License(License&&)=delete;
    License& operator=(const License&)=delete;
    License&& operator=(License&&)=delete;
    ~License()= default;

    License(int licensenumber, LicenseType licensetype);

    int licenseNumber() const { return _license_number; }
    void setLicenseNumber(int license_number) { _license_number = license_number; }

    LicenseType licenseType() const { return _license_type; }
    void setLicenseType(const LicenseType &license_type) { _license_type = license_type; }

    friend std::ostream &operator<<(std::ostream &os, const License &rhs);
    

};

#endif // LICENSE_H
