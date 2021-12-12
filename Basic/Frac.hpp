#include <bits/stdc++.h>
using namespace std;

class Frac
{

public:
    int up, down;

private:
    bool is_simped = true;    

public:
    Frac(int _up = 0, int _down = 1) : up(_up), down(_down) {}



private:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }

public:
    void simp()
    {
        int m = gcd(this->up,this->down);
        this->up /= m , this->down /=m;
    }

public:
    string output()
    {
        this->simp();
        if(down == 1)
            return to_string(up);
        else
        {
            if(down < 0)
                down = -down , up = - up;
            return to_string(up) + "/" + to_string(down);
        }
                   
    }
public:
    Frac operator + (const Frac x) const 
    {
        Frac tmp;
        tmp.up = this->up * x.down + this->down * x.up;
        tmp.down = this->down * x.down;
        tmp.simp();
        return tmp;
    }

public:
    Frac operator * (const Frac x) const
    {
        Frac tmp;
        tmp.up = this->up * x.up;
        tmp.down = this->down * x.down;
        tmp.simp();
        return tmp;
    } 
public:
    Frac operator / (const Frac x) const
    {
        Frac tmp;
        tmp.up = this->up * x.down;
        tmp.down = this->down * x.up;
        tmp.simp();
        return tmp;
    }
};