#include "CreditCard.h"
#include "CreditCardType.h"

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    std::string val = "";
    if(rhs._credit_card_type == CreditCardType::MILES){
        val = "MILES";
    }else if(rhs._credit_card_type == CreditCardType::NEO){
        val = "NEO";
    }else {
        val = "SIGNATURE";
    }
    os << "_number: " << rhs._number
       << " _limit: " << rhs._limit
       << " _expiry_year: " << rhs._expiry_year
       << " _card_cvv_number: " << rhs._card_cvv_number
       << " _credit_card_type: " << val;
    return os;
}

CreditCard::CreditCard(std::string number, float limit, int expiryyear, int cardcvvnumber, CreditCardType creditcardtype):
_number{number},_limit{limit},_expiry_year{expiryyear},_card_cvv_number{cardcvvnumber}, _credit_card_type{creditcardtype}
{
}
