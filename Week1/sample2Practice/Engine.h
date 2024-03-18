#ifndef ENGINE_H
#define ENGINE_H
#include <ostream>

class Engine
{
private:
    int _horspower{0};
    float _torque{0.0f};
public:
    Engine() = default;
    Engine(const Engine &)=delete;
    Engine(Engine &&)=delete;
    Engine& operator=(const Engine &)=delete;
    Engine&& operator=(Engine &&)=delete;
    ~Engine(){};
    Engine(int horsepower, float torque);

    int horspower() const { return _horspower; }
    void setHorspower(int horspower) { _horspower = horspower; }

    float torque() const { return _torque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);

    
};

#endif // ENGINE_H
