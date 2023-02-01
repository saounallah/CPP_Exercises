#pragma once
class Plush
{
public:
    Plush() = default;
    Plush(int a) : cost{a}
    {
    }
    int get_cost() const
    {
        return cost;
    }
    void set_cost(int a)
    {
        cost = a;
    }

private:
    int cost = 10;
};
