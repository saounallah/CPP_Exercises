#pragma once
#include <string>
#include <iostream>
#include <optional>
#include <Plush.hpp>
class PlushStore
{
public:
    PlushStore(const std::string &name) : _name{name}
    {
    }
    std::string get_name() const
    {
        return _name;
    }
    int get_wealth_amount() const
    {
        return _wealth;
    }
    int get_stock_size() const
    {
        return _stock;
    }
    int get_debt_amount()
    {
        return _debt;
    }
    void loan(int a)
    {
        _wealth = _wealth + a;
        _debt = _wealth + (_wealth * 0.1);
    }
    int make_plush(int a)
    {
        if (_wealth > 0)
        {
            _stock = _stock + 1;
            _wealth = _wealth - a;
        }
        if (get_wealth_amount() < 0)
        {
            _wealth = 0;
        }
        return _debt + get_experience();
    }
    int get_experience()
    {
        return _stock;
    }
    std::optional<Plush> buy(int a)
    {

        return a;
    }

private:
    std::string _name;
    int _wealth = 0;
    int _stock = 0;
    int _debt = 0.0;
};