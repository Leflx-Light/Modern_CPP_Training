#include "License.h"

License::License(int licensenumber, LicenseType licensetype):
_license_number{licensenumber},_license_type{licensetype}
{
}
std::ostream &operator<<(std::ostream &os, const License &rhs) {
    os << "_license_number: " << rhs._license_number;
    return os;
}
