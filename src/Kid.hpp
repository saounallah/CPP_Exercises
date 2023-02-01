#pragma once
#include <string>
#include <iostream>
#include <PlushStore.hpp>
class Kid
{
public:
    Kid(const std::string &name, int money) : _name{name}, _money{money}
    {
    }
    std::string get_name() const
    {
        return _name;
    }
    int get_money() const
    {
        return _money;
    }
    friend std::ostream &operator<<(std::ostream &stream, const Kid &kid)
    {
        stream << kid.get_name() << " has " << kid.get_money() << " euros.";
        return stream;
    }
    void buy_plush(PlushStore plush)
    {

        if (get_money() > plush.get_wealth_amount())
        {
        }
    }

private:
    std::string _name;
    int _money = 0;
};