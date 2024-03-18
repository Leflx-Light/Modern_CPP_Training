#ifndef CREDITCARD_H
#define CREDITCARD_H
#include<iostream>
#include "CreditCardType.h"
class CreditCard
{
private:
     std::string _number;
     float _limit;
     int _expiry_year;
     int _card_cvv_number;
     CreditCardType _credit_card_type;

public:
    CreditCard()=delete;
    CreditCard(const CreditCard&)=delete;
    CreditCard(CreditCard&&)=delete;
    const CreditCard& operator=(const CreditCard&)=delete;
    CreditCard&& operator=(CreditCard&&)=delete;
    ~CreditCard()=default;

    CreditCard(std::string number, float limit, int expiryyear, int cardcvvnumber, CreditCardType creditcardtype);

    std::string number() const { return _number; }

    float limit() const { return _limit; }
    void setLimit(float limit) { _limit = limit; }

    int expiryYear() const { return _expiry_year; }

    int cardCvvNumber() const { return _card_cvv_number; }

    CreditCardType creditCardType() const { return _credit_card_type; }
    void setCreditCardType(const CreditCardType &credit_card_type) { _credit_card_type = credit_card_type; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
    
};

#endif // CREDITCARD_H
