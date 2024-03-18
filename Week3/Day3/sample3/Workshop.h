#ifndef WORKSHOP_H
#define WORKSHOP_H
#include<iostream>
#include<variant>
#include "WorkShopType.h"

class Workshop
{
private:
    std::variant<int, std::string> _centre_id;
    int _service_point_count;
    WorkShopType _type;
    int _token_number;
    static int _auto_token;
    int _attendant_count;
    float _evaluation_value;
    int _current_charge;


public:
    Workshop()=delete;
    Workshop(const Workshop&)=delete;
    Workshop(Workshop&&)=delete;
    Workshop& operator=(const Workshop&)=delete;
    Workshop&& operator=(Workshop&&)=delete;
    ~Workshop() =default;

    Workshop(std::variant<int, std::string> centre_id, int service_point_count, WorkShopType type, int token_number, int auto_token, int attendant_count, float evaluation_value, int current_charges);

    std::variant<int, std::string> centreId() const { return _centre_id; }
    void setCentreId(const std::variant<int, std::string> &centre_id) { _centre_id = centre_id; }

    int servicePointCount() const { return _service_point_count; }
    void setServicePointCount(int service_point_count) { _service_point_count = service_point_count; }

    WorkShopType type() const { return _type; }
    void setType(const WorkShopType &type) { _type = type; }

    int tokenNumber() const { return _token_number; }
    void setTokenNumber(int token_number) { _token_number = token_number; }

    static int autoToken() { return Workshop::_auto_token; }
    static void setAutoToken(int auto_token) { Workshop::_auto_token = auto_token; }

    int attendantCount() const { return _attendant_count; }
    void setAttendantCount(int attendant_count) { _attendant_count = attendant_count; }

    float evaluationValue() const { return _evaluation_value; }
    void setEvaluationValue(float evaluation_value) { _evaluation_value = evaluation_value; }

    int currentCharge() const { return _current_charge; }
    void setCurrentCharge(int current_charge) { _current_charge = current_charge; }

    friend std::ostream &operator<<(std::ostream &os, const Workshop &rhs);

    
};

#endif // WORKSHOP_H
