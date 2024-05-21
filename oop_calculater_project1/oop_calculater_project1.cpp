
#include <iostream>
#include <string>
using namespace std;

class clsCalculater
{
private:
    int _x = 0;
    int oldValue = 0;
    int NowValue = 0;
    string _OpType = " ";

protected:
    void SetClear()
    {
        //_x = (_x / _x) -1;
        _x = 0;
        oldValue = 0;
        NowValue = 0;
        _OpType = "Clear ";
    }
    void SetAdd(int x)
    {
        NowValue = 0;
        _x = oldValue + x;
        oldValue = x;
        NowValue = x;
        _OpType = "Adding ";
    }
    void SetSubtract(int x)
    {
        NowValue = 0;
        _x = _x - x;
        oldValue = _x;
        NowValue = x;
        _OpType = "Subtracting ";
    }
    void SetDivide(int x)
    {
        NowValue = 0;
        _x = _x / x;
        oldValue = _x;
        NowValue = x;
        _OpType = "Dividing ";
    }
    void SetMultiply(int x)
    {
        NowValue = 0;
        _x = _x * x;
        oldValue = _x;
        NowValue = x;
        _OpType = "Multiplying ";
    }

public:
    void Clear()
    {
        SetClear();
        //return _x;
    }
    int Add(int x)
    {
        SetAdd(x);
        return _x;
    }
    int Subtract(int x)
    {
        SetSubtract(x);
        return _x;
    }
    int Divide(int x)
    {
        if (x == 0)
        {
            x = 1;
        }
        SetDivide(x);
        return _x;

       /*
            if (x == 0)
        {
            x = 1;
            SetDivide(x);
            return _x;
        }
        else
        {
            SetDivide(x);
            return _x;
        }
       */
        
    }
    int Multiply(int x)
    {
        SetMultiply(x);
        return _x;
    }
    void PrintResult()
    {
        cout << "Result after "<< _OpType << NowValue << " is : " << _x << endl;
        //return 2;
    }
    int GetFinalResult()
    {
        return 2;
    }
};

int main()
{
    clsCalculater  Calculater1;

    Calculater1.Clear();
    Calculater1.Add(10);
    Calculater1.PrintResult();

    Calculater1.Add(100);
    Calculater1.PrintResult();

    Calculater1.Subtract(20);
    Calculater1.PrintResult();

    Calculater1.Divide(0);
    Calculater1.PrintResult();

    Calculater1.Divide(2);
    Calculater1.PrintResult();

    Calculater1.Multiply(3);
    Calculater1.PrintResult();

    Calculater1.Clear();
    Calculater1.PrintResult();



    Calculater1.Add(300);
    Calculater1.PrintResult();

    Calculater1.Multiply(2);
    Calculater1.PrintResult();

    Calculater1.Divide(3);
    Calculater1.PrintResult();


    system("pause>0");
    return 0;
}


